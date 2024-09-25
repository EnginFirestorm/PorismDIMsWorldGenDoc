// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "FastNoiseEditor.h"
#include "MaterialDomain.h"
#include "Materials/Material.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "ChunkWorldStructs.generated.h"

class FChunk;

USTRUCT(BlueprintType)
struct FChunkRef
{
	GENERATED_BODY()

	FChunk* Chunk = nullptr;
};

/** A render-specific class for settings. Extra functions can be activated via this to change the design a little. Attention! This class only works for its partner */
UCLASS(BlueprintType, Blueprintable)
class PORISMDIMSWORLDGENERATOR_API UChunkBlock : public UObject {

	GENERATED_BODY()

};

//----------------------------------------------------------------------//

USTRUCT(BlueprintType)
struct FChunkWorldHit : public FTableRowBase
{

	GENERATED_BODY()

	/** If valid, the hit material, e.g. for your item drop */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	UMaterialInterface* Material = nullptr;
	/** If valid, the hit mesh, e.g. for your item drop */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	UStaticMesh* Mesh = nullptr;
	/** If valid, the hit materialIndex, e.g. for your item drop */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	int MaterialIndex = -1;
	/** If valid, the hit Chunk */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	FChunkRef Chunk = FChunkRef();
	/** If valid, the detail layer of the Chunk */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	int DetailLevel = -1;
	/** If valid, the blockChunkIndex, is the stored position in the Chunk data set */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	int BlockChunkIndex = -1;
	/** If valid, the blockChunkPos. The 3D position in the Chunk */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	FIntVector BlockChunkPos = FIntVector(0);
	/** If valid, the chunkGridPos of the chunk */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	FIntVector ChunkGridPos = FIntVector(0);
	/** If valid, the blockWorldPos, the 3D position in the chunkworld, which is important for terraforming */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	FIntVector BlockWorldPos = FIntVector(0);
	/** If false. You used a chunk while it was in generate or render state, this makes the rest of the results questionable, as they may not correspond to reality. May try it in 1 frame again */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	bool ChunkWasReadyToUse = false;
	/** If true. The check was canceled, this only happens if there is a problem with the generator or the hit data e.g. generator is not running or the hit did not go to the generator collision */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Report")
	bool CheckSuccess = true;
};

UENUM(BlueprintType)
enum class ChunkTypes : uint8 {
	ChunkCubic			UMETA(DisplayName = "ChunkCubic"),
	ChunkHexagonal		UMETA(DisplayName = "ChunkHexagonal"),
	ChunkCubicX2	    UMETA(DisplayName = "ChunkCubicX2"),
};

USTRUCT(BlueprintType)
struct FChunkDataParams : public FTableRowBase
{

	GENERATED_BODY()

	/** This is for the visual surface look */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlockShape")
	ChunkTypes ChunkType;
	/** This is a parameter extension for ChunkType */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlockShape")
	TSubclassOf<UChunkBlock> BlockTools = UChunkBlock::StaticClass();
	/** This defines, how many Chunks are loaded in which axis direction */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ViewDistance")
	FIntVector SectorCount;
	/** The size in unreal units of a block */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ChunkShape")
	double BlockSizeMulti;
	/** This specification allows you to change the shape of the Chunk. Please note that the background calculation is done with int, the smallest chunk must be 1,1,1. please refer to the examples */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ChunkShape")
	FVector ChunkSizeMulti;
	/** Gives the possibility to define a template chunk of a certain detail level for the generation of the surface.
	This allows, for example, LOD Level 0 to be generated using the data from LOD Level 1, which results in a “pixelation” of LOD Level 0.
	This can be useful if the player is to have the option of “ removing half blocks”, for example. 
	Please only ever use the index of the preceding lines as the specification */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ChunkShape (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	int GenTemplateDetailLevel = -1;
	/** Should this Chunk support collision? */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeCollision")
	bool Collision;
	/** Collision profile to use */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeCollision")
	FName CollisionProfileName = "BlockAll";
	/** Collision type */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeCollision")
	TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled = ECollisionEnabled::QueryAndPhysics;
	/** Should this Chunk support Shadows? (Collisions and Shadows share the model generation) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeShadows")
	bool Shadows;
	/** Needs WorldGenDef->TransparentMaterialIndexs or WorldGenDef->TransparentMaterial to work */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShapeFeatures")
	bool TransparencySupport = false;
	/** Should the vertex buffers be optimized in this Chunk? It's just for memory. Please also note that this may share the vertex between the polygons */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeFeatures")
	bool OptimizeVertexBuffer = true;
	/** Should the index buffers be optimized in this Chunk? Attention, this will definitely make some effects unusable, as this function deletes polygons and merges vertexes.
	Requires "OptimizeVertexBuffer" to work. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeFeatures")
	bool OptimizeIndexBuffer = true;
	/** Should we render the borders? This wastes render resources, but is necessary to avoid gaps between the Chunk zones and prevents flickering while terraforming */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeFeatures")
	bool RenderChunkBorder = true;
	/** Should this Chunk render InstancedMeshs? */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeFeatures")
	bool RenderInstancedMeshs;
	/** Here you can optionally use a material to display the entire detail level. If this field is filled, the materials in the biome list will be ignored. This is also the only way to overlay textures/colors, see examples */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeFeatures")
	UMaterialInterface* MultiMaterial = nullptr;
	/** If active, only the debug material will be displayed in this Chunk, which can be used to determine whether the distance generator is working correctly */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ShapeDebug")
	UMaterialInterface* DebugMaterial = nullptr;
	/** Should this Chunk support InstancedMeshCollision? */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InstancedMeshCollision")
	bool InstancedMeshCollision;
	/** InstancedMeshCollision profile to use */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InstancedMeshCollision")
	FName InstancedMeshCollisionProfileName = "BlockAll";
	/** InstancedMeshCollision type */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InstancedMeshCollision")
	TEnumAsByte<ECollisionEnabled::Type> InstancedMeshCollisionEnabled = ECollisionEnabled::QueryAndPhysics;
	/** Should this Chunk support InstancedMeshShadows? */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InstancedMeshShapeShadows")
	bool InstancedMeshShadows;
};

class FChunkData
{
public:
	ChunkTypes ChunkType;
	UChunkBlock* BlockTools = nullptr;

	FChunkData* GenTemplate = nullptr; //When this is set, the Chunk will use its parent as a template for the generator

	FIntVector SectorCount = FIntVector(16, 16, 2); //Chunk Radius the view range		8 8 8						4 4 4
	double ViewDistance = 1; //Chunk View Distance										////						////
	FIntVector ChunkSize = FIntVector(-1); //Visual Chunk Size						102400 102400 102400		3200 3200 3200
	FIntVector ChunkBlockFactor = FIntVector(16, 16, 16); //Chunk Block Count			1024 1024 1024				32 32 32
	FIntVector ChunkFactor = FIntVector(-1); //Chunk Grid Size							32 32 32					1 1 1
	int BlockSize = -1; //Visual Block Size												3200						100
	int BlockFactor = -1; //Block Grid Size												32							1
	FIntVector BlockCount = FIntVector(16, 16, 256); //Block Count						32 32 32					32 32 32
	FIntVector PointCount = FIntVector(18, 18, 258); //Block Count						34 34 34					34 34 34
	int PointArraySize = 18 * 18 * 258; //Point Array Size								34*34*34					34*34*34
	size_t PointBufferSize = 0; //Point Buffer Size	(to allocate ram for cache and save)////						////
	size_t GenBufferSize = 0; //Generator Buffer Size									////						////
	FIntVector ChildGridSize = FIntVector(0); //Child Grid Size							////						////
	int ChildCount = 0; //Child Count													////						////
	bool Collision = false; //Symulate Collision
	bool InstancedMeshCollision = false; //Symulate InstancedMesh Collision
	bool Shadows = false; //Symulate Shadows and Shadows
	bool InstancedMeshShadows = false; //Symulate InstancedMesh Shadows
	bool TransparencySupport = false;
	bool OptimizeVertexBuffer = false; //Optimize Vertex Buffer
	bool OptimizeIndexBuffer = false; //Optimize Vertex Buffer
	bool CookIndexBuffer = false; //Cook Index Buffer
	bool RenderChunkBorder = true;
	bool RenderInstancedMeshs;
	UMaterialInterface* MultiMaterial = nullptr; //Global Material
	UMaterialInterface* DebugMaterial = nullptr; //Chunk Material
	TArray<FMaterialDef>* WorldMaterials; //Chunk Materials
	bool Debug = false; //Debug Mode
	bool CacheToDrive = false; //Chashe to Drive
	FName CollisionProfileName = ""; //Collision Profile Name
	ECollisionEnabled::Type CollisionEnabled; //Collision Enabled
	FName InstancedMeshCollisionProfileName = ""; //Collision Profile Name
	ECollisionEnabled::Type InstancedMeshCollisionEnabled; //Collision Enabled
	bool LastLayer = false; //Last Layer

	/** THIS WILL NOT WORK FOR THE GENERATOR, IT IS JUST A DEFAULT FOR & */
	FChunkData() {};

	FChunkData(FChunkDataParams Param, FIntVector BlockBaseCount, int BaseBlockSize, bool LastLayer, FChunkData* GenTemplate) :
		GenTemplate(GenTemplate),
		SectorCount(Param.SectorCount), 
		BlockSize(Param.BlockSizeMulti* BaseBlockSize), 
		Collision(Param.Collision), InstancedMeshCollision(Param.InstancedMeshCollision),
		Shadows(Param.Shadows), InstancedMeshShadows(Param.InstancedMeshShadows),
		TransparencySupport(Param.TransparencySupport), 
		RenderChunkBorder(Param.RenderChunkBorder), RenderInstancedMeshs(Param.RenderInstancedMeshs),
		MultiMaterial(Param.MultiMaterial), 
		DebugMaterial(Param.DebugMaterial),
		LastLayer(LastLayer)
	{
		this->ChunkType = Param.ChunkType;
		this->OptimizeVertexBuffer = Param.OptimizeVertexBuffer;
		this->OptimizeIndexBuffer = Param.OptimizeIndexBuffer;
		this->CollisionProfileName = Param.CollisionProfileName;
		this->CollisionEnabled = Param.CollisionEnabled;
		this->InstancedMeshCollisionProfileName = Param.InstancedMeshCollisionProfileName;
		this->InstancedMeshCollisionEnabled = Param.InstancedMeshCollisionEnabled;

		this->ChunkSize = FIntVector(Param.ChunkSizeMulti * FVector(BlockBaseCount) * FVector(BlockSize));
		this->ChunkFactor = FIntVector(ChunkSize.X / BaseBlockSize / BlockBaseCount.X, ChunkSize.Y / BaseBlockSize / BlockBaseCount.Y, ChunkSize.Z / BaseBlockSize / BlockBaseCount.Z);
		this->BlockFactor = BlockSize / BaseBlockSize;
		this->BlockCount = ChunkSize / BlockSize;
		this->PointCount = BlockCount + FIntVector(2);
		this->ChunkBlockFactor = ChunkFactor * BlockCount;
		this->PointArraySize = PointCount.X * PointCount.Y * PointCount.Z;
		this->PointBufferSize = (static_cast<unsigned long long>(PointArraySize) + 1 + 1 + PointCount.Z) * sizeof(int32);
		this->GenBufferSize = (static_cast<unsigned long long>(PointArraySize / 16) + 2) * 16 * sizeof(int32);
		this->ViewDistance = FVector::Dist(FVector(0), FVector(SectorCount * ChunkBlockFactor));
	}

	~FChunkData() {
		if (BlockTools)
		{
			BlockTools->RemoveFromRoot();
			BlockTools->ConditionalBeginDestroy();
		}
	}
};
//----------------------------------------------------------------------//


UENUM(BlueprintType)
enum class SurfaceGenType : uint8 {
	Normal			UMETA(DisplayName = "Normal"),
	TopLayer		UMETA(DisplayName = "CheckTopLayer Z-P"),
	TopLayerAround	UMETA(DisplayName = "CheckTopLayerAround Point"),
	OnTopOf			UMETA(DisplayName = "CheckOnTopOf Z-PN"),
	OnTopOfAround	UMETA(DisplayName = "CheckOnTopOf Around Point"),
	//Lowlayer		UMETA(DisplayName = "CheckLowlayer Z-M"),
	//Neighbor		UMETA(DisplayName = "CheckNeighbors XY-PM"),
};


#define InitNode(NAME, PLAN) \
if(NAME##Node)\
NAME##Node->~Generator();\
NAME##Node = nullptr;\
if (!NAME.IsEmpty())\
{\
	NAME##Node = FastNoise::NewFromEncodedNodeTree(TCHAR_TO_ANSI(*NAME));\
	PLAN += NAME;\
}\
else if (NAME##BP)\
{\
	NAME##Run = NewObject<UFastNoiseEditor>(this, NAME##BP);\
	NAME##Run->Nodes = &Nodes;\
	auto n = NAME##Run->GetNoiseRef(caller);\
	if(n.Node)\
	{\
		NAME##Node = n.Node->BaseNode;\
		PLAN += n.Node->Flow;\
	}\
	else\
	{\
		NAME##Node = FastNoise::NewFromEncodedNodeTree("AAAAAIA/"); \
		PLAN += FString("AAAAAIA/");\
	}\
}\
else if (NAME##Run)\
{\
	NAME##Run->Nodes = &Nodes;\
	auto n = NAME##Run->GetNoiseRef(caller);\
	if(n.Node)\
	{\
		NAME##Node = n.Node->BaseNode;\
		PLAN += n.Node->Flow;\
	}\
	else\
	{\
		NAME##Node = FastNoise::NewFromEncodedNodeTree("AAAAAIA/"); \
		PLAN += FString("AAAAAIA/");\
	}\
}

#define CheckChunkMaterial(ARR) \
for (auto& task : ARR) \
{\
if ((!task.Material || !task.Material->IsValidLowLevel()) && task.MeshId.IsEmpty() && task.MaterialIndex < 0 ) \
task.Material = UMaterial::GetDefaultMaterial(MD_Surface);\
}

#define addSpecificMaterial(MAT, MATID) \
{ \
	bool found = false; \
	for (auto& entry : def) { \
		if ((MAT && entry.Material == MAT) || (!MAT && entry.MaterialIndex == MATID && MATID != -1)) { \
			found = true; \
			break; \
		} \
	} \
	if (!found) { \
		FMaterialDef* trans = nullptr; \
		for (auto& entry : transparent) { \
			if ((MAT && entry.Material == MAT) || (!MAT && entry.MaterialIndex == MATID && MATID != -1)) { \
				trans = &entry; \
				break; \
			} \
		} \
		if (trans) { \
			def.Add(*trans); \
			def.Last().MaterialIndex = def.Num() - 1; \
		} \
		else { \
			def.Add(FMaterialDef(MAT, def.Num(), false, "", ECollisionEnabled::NoCollision)); \
		} \
	} \
}

#define AddChunkMaterial(ARR) \
for (auto& task : ARR) \
{\
addSpecificMaterial(task.Material, task.MaterialIndex);\
}

struct FInstanceCollisionData;

USTRUCT(BlueprintType)
struct FMeshEntry : public FTableRowBase {

	GENERATED_BODY()
	/** A placeholder to assign the mesh to a BiomeMaterialStep, this is later replaced by an internal number when loading */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshEntry")
	FString MeshId;
	/** The mesh to be spawned */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshEntry")
	UStaticMesh* Mesh;
	/** This is the material that surrounds the mesh block, when it is at null it is equivalent to air */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshEntry")
	UMaterialInterface* Material;
	/** This is the material that surrounds the mesh block, when it is at null it is equivalent to air */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshEntry")
	int MaterialIndex = -1;
	/** The InstancedMeshType you want to use */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshManager")
	TSubclassOf<UInstancedStaticMeshComponent> MeshType = UInstancedStaticMeshComponent::StaticClass();
	/** The offset of the mesh, the position is to be regarded as an offset in order to align the mesh with the block */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshTransform (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	FTransform Offset;
	/** Determines whether the mesh should look at a specific point in the coradiant system for example planets */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshDirection")
	bool RotateToPoint;
	/** The point to which the mesh should be aligned */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshDirection")
	FVector Point;

	int MeshIndex = -1;

	TArray<FInstanceCollisionData*> UnusedCollisions;
};

USTRUCT(BlueprintType)
struct FBiomeMaterialStep : public FTableRowBase {

	GENERATED_BODY()

	/** This is the target material for this step */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep")
	UMaterialInterface* Material;
	/** As an alternative to a material, a mesh could also be placed in this step. To do this, simply leave the material at zero and enter one of the IDs defined in "WorldGenDef" here. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep")
	FString MeshId;
	/** In case you dont want to use different materials for the world generator, you can set this directly */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep")
	int MaterialIndex = 0;
	/** This allows you to decide what task this step has to fulfill */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep")
	SurfaceGenType GenType;
	/** This is usually a depth indication. The larger the number the more far-reaching the result, if the test was correct */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep",
		meta = (EditCondition = "GenType == SurfaceGenType::TopLayer || GenType == SurfaceGenType::TopLayerAround", EditConditionHides))
	int Offset;
	/** In each mode, the tested distance relative to the block pos. Usually the larger the number the more performance the test requires */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep",
		meta = (EditCondition = "GenType == SurfaceGenType::TopLayer || GenType == SurfaceGenType::TopLayerAround", EditConditionHides))
	int TestRange;
	/** When in use, the Level can control how strict the check works */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep",
		meta = (EditCondition = "false", EditConditionHides))
	int Level;
	/** When in use, this variable usually defines a point in the coordinate system of the generator or a direction */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep",
		meta = (EditCondition = "GenType == SurfaceGenType::TopLayerAround || GenType == SurfaceGenType::OnTopOfAround", EditConditionHides))
	FVector Point = FVector(0);
	/** When in use, this variable is the expectet air like material to check null means real air */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep",
		meta = (EditCondition = "GenType != SurfaceGenType::Normal", EditConditionHides))
	UMaterialInterface* SearchMaterial;
	/** When in use, this variable is the expectet air like material to check null means real air */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep",
		meta = (EditCondition = "GenType != SurfaceGenType::Normal", EditConditionHides))
	FString SearchMeshId;
	/** When in use, this variable is the expectet air like material to check null means real air */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep",
		meta = (EditCondition = "GenType != SurfaceGenType::Normal", EditConditionHides))
	int SearchMaterialIndex = -1;

	/** If not empty, you can use this to specify that the material is only used within the "bubbles" zone */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep")
	FString BubbleGen;
	/** If not empty, you can use this to specify that the material is only used within the "bubbles" zone */
	UPROPERTY(EditAnywhere, Category = "BiomeMaterialStep")
	TSubclassOf<UFastNoiseEditor> BubbleGenBP;
	/** If not empty, you can use this to specify that the material is only used within the "bubbles" zone */
	UPROPERTY(BlueprintReadWrite, Category = "BiomeMaterialStep")
	TObjectPtr<UFastNoiseEditor> BubbleGenRun;
	FastNoise::SmartNode<> BubbleGenNode;

	/** If you fill the array, this step will only overwrite the selected materials (Or the opposite if FlipOnThisArr is active) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep")
	TArray< UMaterialInterface*> OnlyOnThis;
	/** Like materialIndex, in case you only want to work with a index */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep")
	TArray< int> OnlyOnThisIndex;
	bool OnlyOnThisNodeInit;
	/** If active the array meaning will be fliped to "never overwrite when" */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BiomeMaterialStep")
	bool FlipOnThisArr;
};

USTRUCT(BlueprintType)
struct FBiomeDualData : public FTableRowBase {

	GENERATED_BODY()

	/** Should this biome hidden when generating? Useful for hiding something for testing */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biome Checks (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	bool BiomeHidden;

	/** The area in the map in which the generator may be dominant.
	IMPORTANT! This area must be larger than the largest possible Chunk,
	in order to be able to obtain a meaningful result */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biome Checks")
	FString Domain;
	/** The area in the map in which the generator may be dominant.
	IMPORTANT! This area must be larger than the largest possible Chunk,
	in order to be able to obtain a meaningful result */
	UPROPERTY(EditAnywhere, Category = "Biome Checks")
	TSubclassOf<UFastNoiseEditor> DomainBP;
	/** The area in the map in which the generator may be dominant.
	IMPORTANT! This area must be larger than the largest possible Chunk,
	in order to be able to obtain a meaningful result */
	UPROPERTY(BlueprintReadWrite, Category = "Biome Checks")
	TObjectPtr<UFastNoiseEditor> DomainRun;
	FastNoise::SmartNode<> DomainNode;


	/** This number defines to which extent this biome overlaps with its neighbors tolerance. 0 would create sharp edges */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biome Checks")
	float DomainOver;


	/** This generator determines the distribution between GenA and GenB (GenA is positive) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shapeing")
	FString DualSwitch;
	/** This generator determines the distribution between GenA and GenB (GenA is positive) */
	UPROPERTY(EditAnywhere, Category = "Shapeing")
	TSubclassOf<UFastNoiseEditor> DualSwitchBP;
	/** This generator determines the distribution between GenA and GenB (GenA is positive) */
	UPROPERTY(BlueprintReadWrite, Category = "Shapeing")
	TObjectPtr<UFastNoiseEditor> DualSwitchRun;
	FastNoise::SmartNode<> DualSwitchNode;


	/** The first generator */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shapeing")
	FString GenA;
	/** The first generator */
	UPROPERTY(EditAnywhere, Category = "Shapeing")
	TSubclassOf<UFastNoiseEditor> GenABP;
	/** The first generator */
	UPROPERTY(BlueprintReadWrite, Category = "Shapeing")
	TObjectPtr<UFastNoiseEditor> GenARun;
	FastNoise::SmartNode<> GenANode;

	/** The second generator */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shapeing")
	FString GenB;
	/** The second generator */
	UPROPERTY(EditAnywhere, Category = "Shapeing")
	TSubclassOf<UFastNoiseEditor> GenBBP;
	/** The second generator */
	UPROPERTY(BlueprintReadWrite, Category = "Shapeing")
	TObjectPtr<UFastNoiseEditor> GenBRun;
	FastNoise::SmartNode<> GenBNode;


	/** Overwrites the default Ocean setting */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting")
	bool OverwriteWorldOcean;
	/** If active, the generator will try to fill everything with "water" from a height Z, taking into account certain rules*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting", 
		meta = (EditCondition="OverwriteWorldOcean && !GenerateOceanAroundCenter", EditConditionHides))
	bool GenerateOceanFlat;
	/** If active, the generator will try to fill everything with "water" from a radius around zero, taking into account certain rules*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting", 
		meta = (EditCondition = "OverwriteWorldOcean && !GenerateOceanFlat", EditConditionHides))
	bool GenerateOceanAroundCenter;
	/** The altitude from which the ocean starts, is normally the Z axis, but can also be viewed from the perspective of a planet*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting", 
		meta = (EditCondition = "OverwriteWorldOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )", EditConditionHides))
	int StartingOceanHeight;

	/** If active, the generator will try to detect cavities and not fill them if they are cut off from the surface and the ocean,
	taking into account the direction of flow, with a significant additional effort*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PLANNED Shapepainting", 
		meta = (EditCondition = "OverwriteWorldOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )", EditConditionHides))
	bool RespectAirBubblesOcean;
	/** Is used to determine a cavity, areas that are not in contact with the surface and do not exceed the specified block distance are interpreted as a cavity
	without liquid everything that is larger is filled despite a suitable structure.
	Attention this entry has an enormous effect on the performance when generating*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting", 
		meta = (EditCondition = "OverwriteWorldOcean && RespectAirBubblesOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )", EditConditionHides))
	FIntVector MaximumOceanCavityExpansion;

	/** This material is used by the generator to fill an ocean area*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting", 
		meta = (EditCondition = "OverwriteWorldOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )", EditConditionHides))
	UMaterialInterface* OceanMaterial;
	/** This material is used by the generator to fill an ocean area*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting",
		meta = (EditCondition = "OverwriteWorldOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )", EditConditionHides))
	int OceanMaterialIndex = 0;
	/** This material is used by the generator to fill an ocean area*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting",
		meta = (EditCondition = "OverwriteWorldOcean && ( GenerateOceanAroundCenter )", EditConditionHides))
	FVector OceanCenter = FVector(0);


	/** This number determines by how much DualSwitch comes over its edges in both directions, e.g.
A = 0.05, B = -0.05 -> A = 0.15, B = 0.05
Means that both are above 0 and are generated, whereby A is more dominant than B */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shapeing")
	float Overlap;


	/** Universal generator materials */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Painting")
	TArray<FBiomeMaterialStep> GenUMaterials;
	bool GenUMaterialsNodeInit = false;


	/** The first generator materials */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Painting")
	TArray<FBiomeMaterialStep> GenAMaterials;
	bool GenAMaterialsNodeInit = false;


	/** The second generator materials */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Painting")
	TArray<FBiomeMaterialStep> GenBMaterials;
	bool GenBMaterialsNodeInit = false;

	bool NoiseOnly = true;
};

UENUM(BlueprintType)
enum class AxisBehavior : uint8 {
	Infinity			UMETA(DisplayName = "Infinity"),
	ZeroOrientation		UMETA(DisplayName = "ZeroOrientation"),
	SingleChunk 		UMETA(DisplayName = "SingleChunk"),
};

USTRUCT(BlueprintType)
struct FMaterialDef : public FTableRowBase
{
	GENERATED_BODY()

	/** The to be configurated material */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MaterialDef")
	UMaterialInterface* Material;
	
	/** The to be configurated material index */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MaterialDef")
	int MaterialIndex = -1;

	/** Will enable the generator to generate extra poylgons required for transparency */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MaterialDef")
	bool SupportTransparency = false;

	/** Collision profile to use */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MaterialDef")
	FName CollisionProfileName = "BlockAll";
	/** Collision type */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MaterialDef")
	TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled = ECollisionEnabled::QueryAndPhysics;
	FMaterialDef(UMaterialInterface* Material, int MaterialIndex, bool SupportTransparency, FName CollisionProfileName, ECollisionEnabled::Type CollisionEnabled) :
		Material(Material), MaterialIndex(MaterialIndex), SupportTransparency(SupportTransparency), CollisionProfileName(CollisionProfileName), CollisionEnabled(CollisionEnabled) {}
	
	FMaterialDef() {}
};

/** The configuration of the generator is inserted here. Please do not change or edit it while the generator is running. Almost all changes to the generator will
damage the save and cache data, regardless of the generator state and should therefore not be edited in the game release version.
A converter will be implemented for updating the saveFile in order to be able to implement various extensions and format changes*/
UCLASS(BlueprintType, Blueprintable)
class PORISMDIMSWORLDGENERATOR_API UWorldGenDef : public UObject {

	GENERATED_BODY()

public:

	/** Please bind here your DataTable for the generator instructions (FBiomeDualData) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biome Checks")
	UDataTable* WorldBiomesDT;
	/** Please add here your Biomes for the generator instructions (FBiomeDualData) */
	UPROPERTY(BlueprintReadWrite, Category = "Biome Checks")
	TArray<FBiomeDualData> WorldBiomes;


	/** A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome X is infinite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biome Checks")
	FString WorldBiomeOffsetX;
	/** A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome X is infinite*/
	UPROPERTY(EditAnywhere, Category = "Biome Checks")
	TSubclassOf<UFastNoiseEditor> WorldBiomeOffsetXBP;
	/** A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome X is infinite*/
	UPROPERTY(BlueprintReadWrite, Category = "Biome Checks")
	TObjectPtr<UFastNoiseEditor> WorldBiomeOffsetXRun;
	FastNoise::SmartNode<> WorldBiomeOffsetXNode;


	/** A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome Y is infinite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biome Checks")
	FString WorldBiomeOffsetY;
	/** A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome Y is infinite*/
	UPROPERTY(EditAnywhere, Category = "Biome Checks")
	TSubclassOf<UFastNoiseEditor> WorldBiomeOffsetYBP;
	/** A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome Y is infinite*/
	UPROPERTY(BlueprintReadWrite, Category = "Biome Checks")
	TObjectPtr<UFastNoiseEditor> WorldBiomeOffsetYRun;
	FastNoise::SmartNode<> WorldBiomeOffsetYNode;


	/** A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome Z is infinite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biome Checks")
	FString WorldBiomeOffsetZ;
	/** A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome Z is infinite*/
	UPROPERTY(EditAnywhere, Category = "Biome Checks")
	TSubclassOf<UFastNoiseEditor> WorldBiomeOffsetZBP;
	/** A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.
	It is best to leave the field empty if you have no biomes or the biome Z is infinite*/
	UPROPERTY(BlueprintReadWrite, Category = "Biome Checks")
	TObjectPtr<UFastNoiseEditor> WorldBiomeOffsetZRun;
	FastNoise::SmartNode<> WorldBiomeOffsetZNode;


	/** Please bind here your DataTable for the Chunk instructions (FChunkDataParams) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunk Behavior")
	UDataTable* WorldChunksDT;
	/** Blocks per Chunk */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunk Behavior")
	FIntVector ChunkBlockSize = FIntVector(32, 32, 32);
	/** Visual block size */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunk Behavior")
	int BaseBlockSize = 100;

	/** This allows you to decide how the generator should create the Chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only
	at the zero point. SingleChunk only generates a single Chunk for this axis at the zero point. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunk Behavior")
	AxisBehavior AxisBehaviorX = AxisBehavior::Infinity;

	/** This allows you to decide how the generator should create the chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only
	at the zero point. SingleChunk only generates a single chunk for this axis at the zero point. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunk Behavior")
	AxisBehavior AxisBehaviorY = AxisBehavior::Infinity;

	/** This allows you to decide how the generator should create the chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only
	at the zero point. SingleChunk only generates a single chunk for this axis at the zero point. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chunk Behavior")
	AxisBehavior AxisBehaviorZ = AxisBehavior::Infinity;


	/** A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shapeing")
	FString GenOnlyTest;
	/** A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise. */
	UPROPERTY(EditAnywhere, Category = "Shapeing")
	TSubclassOf<UFastNoiseEditor> GenOnlyTestBP;
	/** A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise. */
	UPROPERTY(BlueprintReadWrite, Category = "Shapeing")
	TObjectPtr<UFastNoiseEditor> GenOnlyTestRun;
	FastNoise::SmartNode<> GenOnlyTestNode;


	/** The primary generator, with which height displacements can be defined, regarding the entire map
	Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shapeing")
	FString WorldGen;
	/** The primary generator, with which height displacements can be defined, regarding the entire map
	Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands*/
	UPROPERTY(EditAnywhere, Category = "Shapeing")
	TSubclassOf<UFastNoiseEditor> WorldGenBP;
	/** The primary generator, with which height displacements can be defined, regarding the entire map
	Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands*/
	UPROPERTY(BlueprintReadWrite, Category = "Shapeing")
	TObjectPtr<UFastNoiseEditor> WorldGenRun;
	FastNoise::SmartNode<> WorldGenNode;


	/** Gives the possibility to edit the input coordinates to the noise generator, in combination with the actor scale you can then edit the block density on an axis 
	without having to change the noise command */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapeing (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	FVector NoiseScale = FVector(1, 1, 1);


	/** If active, the generator will try to fill everything with "water" from a height Z, taking into account certain rules*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting",
		meta = (EditCondition = "!GenerateOceanAroundCenter", EditConditionHides))
	bool GenerateOceanFlat;
	/** If active, the generator will try to fill everything with "water" from a radius around zero, taking into account certain rules*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting",
		meta = (EditCondition = "!GenerateOceanFlat", EditConditionHides))
	bool GenerateOceanAroundCenter;
	/** The altitude from which the ocean starts, is normally the Z axis, but can also be viewed from the perspective of a planet*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting",
		meta = (EditCondition = "GenerateOceanFlat || GenerateOceanAroundCenter", EditConditionHides))
	int StartingOceanHeight;

	/** If active, the generator will try to detect cavities and not fill them if they are cut off from the surface and the ocean, 
	taking into account the direction of flow, with a significant additional effort*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PLANNED Shapepainting",
		meta = (EditCondition = "GenerateOceanFlat || GenerateOceanAroundCenter", EditConditionHides))
	bool RespectAirBubblesOcean;
	/** Is used to determine a cavity, areas that are not in contact with the surface and do not exceed the specified block distance are interpreted as a cavity 
	without liquid everything that is larger is filled despite a suitable structure.
	Attention this entry has an enormous effect on the performance when generating*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting",
		meta = (EditCondition = "RespectAirBubblesOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )", EditConditionHides))
	FIntVector MaximumOceanCavityExpansion;

	/** This material is normally used by the generator to fill an ocean area, but it can also be overwritten by a biome*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting",
		meta = (EditCondition = "GenerateOceanFlat || GenerateOceanAroundCenter", EditConditionHides))
	UMaterialInterface* OceanDefaultMaterial;
	/** This material is normally used by the generator to fill an ocean area, but it can also be overwritten by a biome*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shapepainting",
		meta = (EditCondition = "GenerateOceanFlat || GenerateOceanAroundCenter", EditConditionHides))
	int OceanDefaultMaterialIndex = 0;


	/** You can use this to set the materials you want to use in the generator. Please remember that the order is important for your save data. Please call it before the generator starts!
	If not called, the generator will improvise with the materials it finds in the instruction set, but this is not a good solution for terraforming, modding or early access.
	Please also note that you will need to add all materials that are used in the generator to this list, otherwise the generator will crash!
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DEPRECATED")
	TArray<UMaterialInterface*> WorldMaterials;

	/** Will set WorldMaterialDefs to only transparent materials. Recommended if a list is not preferred, but needed for transperrancy.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Painting")
	bool OnlyTransparentUsage;
		
	/** You can use this to set the materials you want to use in the generator. Please remember that the order is important for your save data. Please call it before the generator starts!
	If not called, the generator will improvise with the materials it finds in the instruction set, but this is not a good solution for terraforming, modding or early access.
	Please also note that if OnlyTransparentUsage is enabled, you will only need to add the transperant materials to this list, otherwise you will need to add all or no materials.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Painting")
	TArray<FMaterialDef> WorldMaterialDefs;

	/** In this list you can configure meshes that should be used by the generator later, please note that the order is important, changes to this could lead to problems with the save data
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Painting")
	TArray<FMeshEntry> WorldMeshes;

	/** If you are working with several materials, here is the place where you have to insert everything that is transparent */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DEPRECATED")
	TArray<UMaterialInterface*> TransparentMaterials;

	/** If you are only working with one multi material, you can store all transparent indexes here. Attention! TransparentMaterials should be empty, otherwise it will overwrite this list */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DEPRECATED")
	TArray<int> TransparentMaterialIndexs;

	std::vector< FNodeLink> Nodes;

	FString InitNodes(UObject* caller) {
		FString Planresult = "";

		InitNode(GenOnlyTest, Planresult);
		InitNode(WorldGen, Planresult);
		InitNode(WorldBiomeOffsetX, Planresult);
		InitNode(WorldBiomeOffsetY, Planresult);
		InitNode(WorldBiomeOffsetZ, Planresult);

		if (!WorldGenNode)
			WorldGenNode = FastNoise::NewFromEncodedNodeTree("AAAAAIA/");

		if(!WorldBiomesDT)
			WorldBiomesDT = NewObject<UDataTable>();

		if (WorldBiomesDT->GetRowMap().Num())
			WorldBiomes.Empty();

		for (const auto Row : WorldBiomesDT->GetRowMap())
		{
			FBiomeDualData biome = *((FBiomeDualData*)Row.Value);
				WorldBiomes.Add(biome);
		}

		for (auto& biome : WorldBiomes)
		{
			InitNode(biome.Domain, Planresult);
			InitNode(biome.DualSwitch, Planresult);
			InitNode(biome.GenA, Planresult);
			InitNode(biome.GenB, Planresult);

			for (auto& step : biome.GenUMaterials)
			{
				InitNode(step.BubbleGen, Planresult);
			}

			for (auto& step : biome.GenAMaterials)
			{
				InitNode(step.BubbleGen, Planresult);
			}

			for (auto& step : biome.GenBMaterials)
			{
				InitNode(step.BubbleGen, Planresult);
			}
		}
		{
			// Check for Null Materials Ignore if we have a index (Multi Material)

			if((!OceanDefaultMaterial || !OceanDefaultMaterial->IsValidLowLevel()) && OceanDefaultMaterialIndex < 0)
				OceanDefaultMaterial = UMaterial::GetDefaultMaterial(MD_Surface);

			for (auto& Biome : WorldBiomes)
			{
				CheckChunkMaterial(Biome.GenUMaterials);
				CheckChunkMaterial(Biome.GenAMaterials);
				CheckChunkMaterial(Biome.GenBMaterials);

				if(Biome.OverwriteWorldOcean && (!Biome.OceanMaterial || !Biome.OceanMaterial->IsValidLowLevel()) && Biome.OceanMaterialIndex < 0)
					Biome.OceanMaterial = UMaterial::GetDefaultMaterial(MD_Surface);
			}



			if (WorldMaterialDefs.Num() == 0 || OnlyTransparentUsage) { // Do we need to create a material list?

				TArray<FMaterialDef> transparent; TArray<FMaterialDef> def;
				transparent.Append(WorldMaterialDefs);
				WorldMaterialDefs.SetNum(0, false);
				def.Add(FMaterialDef(UMaterial::GetDefaultMaterial(MD_Surface), def.Num(),false,"",ECollisionEnabled::NoCollision));

				addSpecificMaterial(OceanDefaultMaterial, OceanDefaultMaterialIndex);
				for (auto& Biome : WorldBiomes)
				{
					AddChunkMaterial(Biome.GenUMaterials);
					AddChunkMaterial(Biome.GenAMaterials);
					AddChunkMaterial(Biome.GenBMaterials);

					addSpecificMaterial(Biome.OceanMaterial, Biome.OceanMaterialIndex);
				}
				
				// Set Debug Materials
				for (const auto Row : WorldChunksDT->GetRowMap())
				{
					FChunkDataParams* Sector = (FChunkDataParams*)Row.Value;
					def.Add(FMaterialDef(Sector->MultiMaterial, def.Num(), false, "", ECollisionEnabled::NoCollision));
					def.Add(FMaterialDef(Sector->DebugMaterial, def.Num(), false, "", ECollisionEnabled::NoCollision));
				}
				WorldMaterialDefs = def;
			}
			else if (WorldMaterialDefs.GetData()[0].Material != UMaterial::GetDefaultMaterial(MD_Surface))
			{
				WorldMaterialDefs.Insert(FMaterialDef(UMaterial::GetDefaultMaterial(MD_Surface), WorldMaterialDefs.Num(), false, "", ECollisionEnabled::NoCollision), 0);
			}
			for(int i = 0; i < WorldMaterialDefs.Num(); i++)
			{
				WorldMaterialDefs[i].MaterialIndex = i;
			}
		}

		if (!WorldMeshes.IsEmpty())
		{
			for (int i = 0; i < WorldMeshes.Num(); i++)
			{
				WorldMeshes[i].MeshIndex = i;
			}
		}

		return Planresult;
	}

	void UnLoadeGens()
	{
		for (auto node : Nodes) {
			delete node.Node;
		}
		Nodes.clear();
	}

	void WriteDataFromBase(UWorldGenDef* Base) {
		// Transfer every value from the base to this
		WorldChunksDT = Base->WorldChunksDT;
		WorldBiomesDT = Base->WorldBiomesDT;
		WorldBiomes.Append(Base->WorldBiomes);
		GenOnlyTest = Base->GenOnlyTest;
		GenOnlyTestBP = Base->GenOnlyTestBP;
		GenOnlyTestRun = Base->GenOnlyTestRun;
		GenOnlyTestNode = Base->GenOnlyTestNode;
		WorldGen = Base->WorldGen;
		WorldGenBP = Base->WorldGenBP;
		WorldGenRun = Base->WorldGenRun;
		WorldGenNode = Base->WorldGenNode;
		WorldBiomeOffsetX = Base->WorldBiomeOffsetX;
		WorldBiomeOffsetXBP = Base->WorldBiomeOffsetXBP;
		WorldBiomeOffsetXRun = Base->WorldBiomeOffsetXRun;
		WorldBiomeOffsetXNode = Base->WorldBiomeOffsetXNode;
		WorldBiomeOffsetY = Base->WorldBiomeOffsetY;
		WorldBiomeOffsetYBP = Base->WorldBiomeOffsetYBP;
		WorldBiomeOffsetYRun = Base->WorldBiomeOffsetYRun;
		WorldBiomeOffsetYNode = Base->WorldBiomeOffsetYNode;
		WorldBiomeOffsetZ = Base->WorldBiomeOffsetZ;
		WorldBiomeOffsetZBP = Base->WorldBiomeOffsetZBP;
		WorldBiomeOffsetZRun = Base->WorldBiomeOffsetZRun;
		WorldBiomeOffsetZNode = Base->WorldBiomeOffsetZNode;
		ChunkBlockSize = Base->ChunkBlockSize;
		BaseBlockSize = Base->BaseBlockSize;
		AxisBehaviorX = Base->AxisBehaviorX;
		AxisBehaviorY = Base->AxisBehaviorY;
		AxisBehaviorZ = Base->AxisBehaviorZ;
		WorldMaterialDefs.Append(Base->WorldMaterialDefs);
		OnlyTransparentUsage = Base->OnlyTransparentUsage;
		WorldMeshes.Append(Base->WorldMeshes);

		OceanDefaultMaterial = Base->OceanDefaultMaterial;
		GenerateOceanFlat = Base->GenerateOceanFlat;
		GenerateOceanAroundCenter = Base->GenerateOceanAroundCenter;
		StartingOceanHeight = Base->StartingOceanHeight;
		RespectAirBubblesOcean = Base->RespectAirBubblesOcean;
		MaximumOceanCavityExpansion = Base->MaximumOceanCavityExpansion;
	}

#if WITH_EDITOR
	virtual bool CanEditChange(const FProperty* InProperty) const override
	{
		const FName PropertyName = InProperty->GetFName();
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, GenOnlyTestBP))
			return GenOnlyTest.IsEmpty();
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, GenOnlyTest))
			return GenOnlyTestBP == nullptr;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, WorldGenBP))
			return WorldGen.IsEmpty();
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, WorldGen))
			return WorldGenBP == nullptr;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, WorldBiomeOffsetXBP))
			return WorldBiomeOffsetX.IsEmpty();
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, WorldBiomeOffsetX))
			return WorldBiomeOffsetXBP == nullptr;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, WorldBiomeOffsetYBP))
			return WorldBiomeOffsetY.IsEmpty();
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, WorldBiomeOffsetY))
			return WorldBiomeOffsetYBP == nullptr;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, WorldBiomeOffsetZBP))
			return WorldBiomeOffsetZ.IsEmpty();
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, WorldBiomeOffsetZ))
			return WorldBiomeOffsetZBP == nullptr;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, GenerateOceanFlat))
			return !GenerateOceanAroundCenter;
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, GenerateOceanAroundCenter))
			return !GenerateOceanFlat;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UWorldGenDef, MaximumOceanCavityExpansion))
			return RespectAirBubblesOcean;

		return true;
	}
#endif
};

USTRUCT(BlueprintType)
struct FBlockChangeCall
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChangeCall")
	FIntVector chunkPose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChangeCall")
	int blockChunkIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChangeCall")
	int chunkDataIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChangeCall")
	int materialIndex;
};