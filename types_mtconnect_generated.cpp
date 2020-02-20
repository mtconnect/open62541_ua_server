/* Generated from MTConnect.TypeDictionary.Binary.xml with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host SY-MacBook-Pro.local by user simon at 2020-02-06 04:44:45 */

#include "types_mtconnect_generated.h"

/* InterfaceStatusDataType */
#define InterfaceStatusDataType_members NULL

/* AssetEventDataType */
static UA_DataTypeMember AssetEventDataType_members[2] = {
{
    UA_TYPENAME("AssetId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AssetType") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AssetEventDataType, assetType) - offsetof(UA_AssetEventDataType, assetId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* MTStatisticType */
#define MTStatisticType_members NULL

/* MTResetTriggerType */
#define MTResetTriggerType_members NULL

/* MessageDataType */
static UA_DataTypeMember MessageDataType_members[2] = {
{
    UA_TYPENAME("NativeCode") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Text") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_MessageDataType, text) - offsetof(UA_MessageDataType, nativeCode) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EmergencyStopDataType */
#define EmergencyStopDataType_members NULL

/* OpenStateDataType */
#define OpenStateDataType_members NULL

/* OnOffDataType */
#define OnOffDataType_members NULL

/* AxisCouplingDataType */
#define AxisCouplingDataType_members NULL

/* FunctionalModeDataType */
#define FunctionalModeDataType_members NULL

/* ActiveStateDataType */
#define ActiveStateDataType_members NULL

/* AxisStateDataType */
#define AxisStateDataType_members NULL

/* MTCategoryType */
#define MTCategoryType_members NULL

/* CompositionStateDataType */
#define CompositionStateDataType_members NULL

/* ProgramEditDataType */
#define ProgramEditDataType_members NULL

/* DirectionDataType */
#define DirectionDataType_members NULL

/* MTSeverityDataType */
#define MTSeverityDataType_members NULL

/* ExecutionDataType */
#define ExecutionDataType_members NULL

/* ControllerModeDataType */
#define ControllerModeDataType_members NULL

/* PathModeDataType */
#define PathModeDataType_members NULL

/* MTRepresentationType */
#define MTRepresentationType_members NULL

/* MTCoordinateSystemType */
#define MTCoordinateSystemType_members NULL

/* YesNoDataType */
#define YesNoDataType_members NULL

/* AvailabilityDataType */
#define AvailabilityDataType_members NULL

/* RotaryModeDataType */
#define RotaryModeDataType_members NULL

/* InterfaceStateDataType */
#define InterfaceStateDataType_members NULL

/* ThreeSpaceSampleDataType */
static UA_DataTypeMember ThreeSpaceSampleDataType_members[3] = {
{
    UA_TYPENAME("X") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Y") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeSpaceSampleDataType, y) - offsetof(UA_ThreeSpaceSampleDataType, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Z") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeSpaceSampleDataType, z) - offsetof(UA_ThreeSpaceSampleDataType, y) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* QualifierDataType */
#define QualifierDataType_members NULL
const UA_DataType UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COUNT] = {
/* InterfaceStatusDataType */
{
    UA_TYPENAME("InterfaceStatusDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2230}}, /* .typeId */
    sizeof(UA_InterfaceStatusDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    InterfaceStatusDataType_members /* .members */
},
/* AssetEventDataType */
{
    UA_TYPENAME("AssetEventDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2618}}, /* .typeId */
    sizeof(UA_AssetEventDataType), /* .memSize */
    UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    0, /* .binaryEncodingId */
    AssetEventDataType_members /* .members */
},
/* MTStatisticType */
{
    UA_TYPENAME("MTStatisticType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2659}}, /* .typeId */
    sizeof(UA_MTStatisticType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    MTStatisticType_members /* .members */
},
/* MTResetTriggerType */
{
    UA_TYPENAME("MTResetTriggerType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2636}}, /* .typeId */
    sizeof(UA_MTResetTriggerType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    MTResetTriggerType_members /* .members */
},
/* MessageDataType */
{
    UA_TYPENAME("MessageDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2653}}, /* .typeId */
    sizeof(UA_MessageDataType), /* .memSize */
    UA_TYPES_MTCONNECT_MESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    0, /* .binaryEncodingId */
    MessageDataType_members /* .members */
},
/* EmergencyStopDataType */
{
    UA_TYPENAME("EmergencyStopDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2207}}, /* .typeId */
    sizeof(UA_EmergencyStopDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    EmergencyStopDataType_members /* .members */
},
/* OpenStateDataType */
{
    UA_TYPENAME("OpenStateDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2201}}, /* .typeId */
    sizeof(UA_OpenStateDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    OpenStateDataType_members /* .members */
},
/* OnOffDataType */
{
    UA_TYPENAME("OnOffDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2204}}, /* .typeId */
    sizeof(UA_OnOffDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    OnOffDataType_members /* .members */
},
/* AxisCouplingDataType */
{
    UA_TYPENAME("AxisCouplingDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2199}}, /* .typeId */
    sizeof(UA_AxisCouplingDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AxisCouplingDataType_members /* .members */
},
/* FunctionalModeDataType */
{
    UA_TYPENAME("FunctionalModeDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2208}}, /* .typeId */
    sizeof(UA_FunctionalModeDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    FunctionalModeDataType_members /* .members */
},
/* ActiveStateDataType */
{
    UA_TYPENAME("ActiveStateDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2197}}, /* .typeId */
    sizeof(UA_ActiveStateDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ActiveStateDataType_members /* .members */
},
/* AxisStateDataType */
{
    UA_TYPENAME("AxisStateDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2200}}, /* .typeId */
    sizeof(UA_AxisStateDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AxisStateDataType_members /* .members */
},
/* MTCategoryType */
{
    UA_TYPENAME("MTCategoryType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2634}}, /* .typeId */
    sizeof(UA_MTCategoryType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    MTCategoryType_members /* .members */
},
/* CompositionStateDataType */
{
    UA_TYPENAME("CompositionStateDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2202}}, /* .typeId */
    sizeof(UA_CompositionStateDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    CompositionStateDataType_members /* .members */
},
/* ProgramEditDataType */
{
    UA_TYPENAME("ProgramEditDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2210}}, /* .typeId */
    sizeof(UA_ProgramEditDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ProgramEditDataType_members /* .members */
},
/* DirectionDataType */
{
    UA_TYPENAME("DirectionDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2205}}, /* .typeId */
    sizeof(UA_DirectionDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DirectionDataType_members /* .members */
},
/* MTSeverityDataType */
{
    UA_TYPENAME("MTSeverityDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2669}}, /* .typeId */
    sizeof(UA_MTSeverityDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    MTSeverityDataType_members /* .members */
},
/* ExecutionDataType */
{
    UA_TYPENAME("ExecutionDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2262}}, /* .typeId */
    sizeof(UA_ExecutionDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ExecutionDataType_members /* .members */
},
/* ControllerModeDataType */
{
    UA_TYPENAME("ControllerModeDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2203}}, /* .typeId */
    sizeof(UA_ControllerModeDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ControllerModeDataType_members /* .members */
},
/* PathModeDataType */
{
    UA_TYPENAME("PathModeDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2209}}, /* .typeId */
    sizeof(UA_PathModeDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    PathModeDataType_members /* .members */
},
/* MTRepresentationType */
{
    UA_TYPENAME("MTRepresentationType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2633}}, /* .typeId */
    sizeof(UA_MTRepresentationType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    MTRepresentationType_members /* .members */
},
/* MTCoordinateSystemType */
{
    UA_TYPENAME("MTCoordinateSystemType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2635}}, /* .typeId */
    sizeof(UA_MTCoordinateSystemType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    MTCoordinateSystemType_members /* .members */
},
/* YesNoDataType */
{
    UA_TYPENAME("YesNoDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2206}}, /* .typeId */
    sizeof(UA_YesNoDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    YesNoDataType_members /* .members */
},
/* AvailabilityDataType */
{
    UA_TYPENAME("AvailabilityDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2198}}, /* .typeId */
    sizeof(UA_AvailabilityDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AvailabilityDataType_members /* .members */
},
/* RotaryModeDataType */
{
    UA_TYPENAME("RotaryModeDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2211}}, /* .typeId */
    sizeof(UA_RotaryModeDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    RotaryModeDataType_members /* .members */
},
/* InterfaceStateDataType */
{
    UA_TYPENAME("InterfaceStateDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2234}}, /* .typeId */
    sizeof(UA_InterfaceStateDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    InterfaceStateDataType_members /* .members */
},
/* ThreeSpaceSampleDataType */
{
    UA_TYPENAME("ThreeSpaceSampleDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2637}}, /* .typeId */
    sizeof(UA_ThreeSpaceSampleDataType), /* .memSize */
    UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    0, /* .binaryEncodingId */
    ThreeSpaceSampleDataType_members /* .members */
},
/* QualifierDataType */
{
    UA_TYPENAME("QualifierDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2668}}, /* .typeId */
    sizeof(UA_QualifierDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    QualifierDataType_members /* .members */
},
};

