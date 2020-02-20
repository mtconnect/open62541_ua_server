/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "nodeset.h"


/* InterfaceStatusDataType - ns=1;i=2230 */

static UA_StatusCode function_nodeset_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceStatusDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2230),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "InterfaceStatusDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2230)
);
}

/* Default XML - ns=1;i=3019 */

static UA_StatusCode function_nodeset_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3019),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3019), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2230), false);
return retVal;
}

static UA_StatusCode function_nodeset_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3019)
);
}

/* InterfaceStateDataType - ns=1;i=2234 */

static UA_StatusCode function_nodeset_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2234),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "InterfaceStateDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2234)
);
}

/* Default XML - ns=1;i=3013 */

static UA_StatusCode function_nodeset_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3013),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3013), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2234), false);
return retVal;
}

static UA_StatusCode function_nodeset_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3013)
);
}

/* OnOffDataType - ns=1;i=2204 */

static UA_StatusCode function_nodeset_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OnOffDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2204),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OnOffDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2204)
);
}

/* Default XML - ns=1;i=3025 */

static UA_StatusCode function_nodeset_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3025),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3025), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2204), false);
return retVal;
}

static UA_StatusCode function_nodeset_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3025)
);
}

/* MTStatisticType - ns=1;i=2659 */

static UA_StatusCode function_nodeset_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTStatisticType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2659),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTStatisticType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2659)
);
}

/* Default XML - ns=1;i=2865 */

static UA_StatusCode function_nodeset_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2865),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2865), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2659), false);
return retVal;
}

static UA_StatusCode function_nodeset_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2865)
);
}

/* EnumStrings - ns=1;i=2861 */

static UA_StatusCode function_nodeset_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2861_variant_DataContents[8];
variablenode_ns_1_i_2861_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "AVERAGE");
variablenode_ns_1_i_2861_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "MAXIMUM");
variablenode_ns_1_i_2861_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "MEDIAN");
variablenode_ns_1_i_2861_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "MINIMUM");
variablenode_ns_1_i_2861_variant_DataContents[4] = UA_LOCALIZEDTEXT("en", "MODE");
variablenode_ns_1_i_2861_variant_DataContents[5] = UA_LOCALIZEDTEXT("en", "RANGE");
variablenode_ns_1_i_2861_variant_DataContents[6] = UA_LOCALIZEDTEXT("en", "ROOT_MEAN_SQUARE");
variablenode_ns_1_i_2861_variant_DataContents[7] = UA_LOCALIZEDTEXT("en", "STANDARD_DEVIATION");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2861_variant_DataContents, (UA_Int32) 8, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2861),
UA_NODEID_NUMERIC(ns[1], 2659),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2861), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2861)
);
}

/* MessageDataType - ns=1;i=2653 */

static UA_StatusCode function_nodeset_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MessageDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2653),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MessageDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2653)
);
}

/* Default Binary - ns=1;i=2903 */

static UA_StatusCode function_nodeset_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2903),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2903), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2653), false);
return retVal;
}

static UA_StatusCode function_nodeset_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2903)
);
}

/* Default JSON - ns=1;i=2908 */

static UA_StatusCode function_nodeset_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2908),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2908), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2653), false);
return retVal;
}

static UA_StatusCode function_nodeset_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2908)
);
}

/* Default XML - ns=1;i=2906 */

static UA_StatusCode function_nodeset_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2906),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2906), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2653), false);
return retVal;
}

static UA_StatusCode function_nodeset_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2906)
);
}

/* AssetEventDataType - ns=1;i=2618 */

static UA_StatusCode function_nodeset_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AssetEventDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special \\gls{Variable} data type for asset change with a\\n      \\mtmodel{AssetType} and \\mtmodel{AssetId}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2618),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AssetEventDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2618)
);
}

/* Default XML - ns=1;i=2748 */

static UA_StatusCode function_nodeset_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special \\gls{Variable} data type for asset change with a\\n      \\mtmodel{AssetType} and \\mtmodel{AssetId}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2748),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2748), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2618), false);
return retVal;
}

static UA_StatusCode function_nodeset_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2748)
);
}

/* Default JSON - ns=1;i=2750 */

static UA_StatusCode function_nodeset_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special \\gls{Variable} data type for asset change with a\\n      \\mtmodel{AssetType} and \\mtmodel{AssetId}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2750),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2750), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2618), false);
return retVal;
}

static UA_StatusCode function_nodeset_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2750)
);
}

/* Default Binary - ns=1;i=2745 */

static UA_StatusCode function_nodeset_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special \\gls{Variable} data type for asset change with a\\n      \\mtmodel{AssetType} and \\mtmodel{AssetId}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2745),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2745), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2618), false);
return retVal;
}

static UA_StatusCode function_nodeset_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2745)
);
}

/* HasMTSource - ns=1;i=2689 */

static UA_StatusCode function_nodeset_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.symmetric  = true;
attr.displayName = UA_LOCALIZEDTEXT("", "HasMTSource");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The \\mtmodel{Source} relation to a \\gls{MTComponent} or \\gls{MTDataItem}.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 2689),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasMTSource"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2689)
);
}

/* HasMTComposition - ns=1;i=2687 */

static UA_StatusCode function_nodeset_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.symmetric  = true;
attr.displayName = UA_LOCALIZEDTEXT("", "HasMTComposition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 2687),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasMTComposition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2687)
);
}

/* HasMTClassType - ns=1;i=2680 */

static UA_StatusCode function_nodeset_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HasMTClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A \\gls{MTDataItem} is representated in OPC UA as a sub-type of the most\\n      appropriate \\uamodel{BaseDataVariableType}. The type is derived from the\\n      MTConnect \\gls{type} attribute and references the corect\\n      \\mtmodel{..ClassType} \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 2680),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasMTClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2680)
);
}

/* HasMTSubClassType - ns=1;i=2683 */

static UA_StatusCode function_nodeset_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HasMTSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A \\gls{MTDataItem} is representated in OPC UA as a sub-type of the most\\n      appropriate \\uamodel{BaseDataVariableType}. The sub-type is derived from\\n      the MTConnect \\gls{subType} attribute and references the corect\\n      \\mtmodel{..ClassType}. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 2683),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasMTSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2683)
);
}

/* ExecutionDataType - ns=1;i=2262 */

static UA_StatusCode function_nodeset_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecutionDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2262),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ExecutionDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2262)
);
}

/* Default XML - ns=1;i=3001 */

static UA_StatusCode function_nodeset_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3001), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2262), false);
return retVal;
}

static UA_StatusCode function_nodeset_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3001)
);
}

/* RotaryModeDataType - ns=1;i=2211 */

static UA_StatusCode function_nodeset_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RotaryModeDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2211),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RotaryModeDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2211)
);
}

/* Default XML - ns=1;i=3049 */

static UA_StatusCode function_nodeset_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3049),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3049), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2211), false);
return retVal;
}

static UA_StatusCode function_nodeset_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3049)
);
}

/* ProgramEditDataType - ns=1;i=2210 */

static UA_StatusCode function_nodeset_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramEditDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2210),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProgramEditDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2210)
);
}

/* Default XML - ns=1;i=3043 */

static UA_StatusCode function_nodeset_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3043),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3043), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2210), false);
return retVal;
}

static UA_StatusCode function_nodeset_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3043)
);
}

/* HasMTReference - ns=1;i=2672 */

static UA_StatusCode function_nodeset_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.symmetric  = true;
attr.displayName = UA_LOCALIZEDTEXT("", "HasMTReference");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 2672),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasMTReference"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2672)
);
}

/* MTCoordinateSystemType - ns=1;i=2635 */

static UA_StatusCode function_nodeset_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTCoordinateSystemType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the \\mtmodel{coordinateSystem} attribute of the MTConnect\\n      \\gls{MTDataItem}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2635),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTCoordinateSystemType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2635)
);
}

/* EnumStrings - ns=1;i=2785 */

static UA_StatusCode function_nodeset_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2785_variant_DataContents[2];
variablenode_ns_1_i_2785_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "MACHINE");
variablenode_ns_1_i_2785_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "WORK");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2785_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the \\mtmodel{coordinateSystem} attribute of the MTConnect\\n      \\gls{MTDataItem}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2785),
UA_NODEID_NUMERIC(ns[1], 2635),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2785), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2785)
);
}

/* Default XML - ns=1;i=2789 */

static UA_StatusCode function_nodeset_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the \\mtmodel{coordinateSystem} attribute of the MTConnect\\n      \\gls{MTDataItem}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2789),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2789), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2635), false);
return retVal;
}

static UA_StatusCode function_nodeset_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2789)
);
}

/* MTCategoryType - ns=1;i=2634 */

static UA_StatusCode function_nodeset_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTCategoryType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Represents the \\gls{category} attribute of the MTConnect \\gls{MTDataItem}.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2634),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTCategoryType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2634)
);
}

/* Default XML - ns=1;i=2769 */

static UA_StatusCode function_nodeset_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Represents the \\gls{category} attribute of the MTConnect \\gls{MTDataItem}.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2769),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2769), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2634), false);
return retVal;
}

static UA_StatusCode function_nodeset_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2769)
);
}

/* EnumStrings - ns=1;i=2765 */

static UA_StatusCode function_nodeset_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2765_variant_DataContents[3];
variablenode_ns_1_i_2765_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "EVENT");
variablenode_ns_1_i_2765_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "CONDITION");
variablenode_ns_1_i_2765_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "SAMPLE");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2765_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Represents the \\gls{category} attribute of the MTConnect \\gls{MTDataItem}.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2765),
UA_NODEID_NUMERIC(ns[1], 2634),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2765), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2765)
);
}

/* MTResetTriggerType - ns=1;i=2636 */

static UA_StatusCode function_nodeset_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTResetTriggerType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These need to become \\uamodel{Good_} status code in OPC UA. resettrigger\\n      is an optional XML element that identifies the type of event that may\\n      cause a reset to occur. It is additional information regarding the meaning\\n      of the data that establishes an understanding of the time frame that the\\n      data represents so that the data may be correctly understood by a client\\n      software application.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2636),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTResetTriggerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2636)
);
}

/* Default XML - ns=1;i=2837 */

static UA_StatusCode function_nodeset_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These need to become \\uamodel{Good_} status code in OPC UA. resettrigger\\n      is an optional XML element that identifies the type of event that may\\n      cause a reset to occur. It is additional information regarding the meaning\\n      of the data that establishes an understanding of the time frame that the\\n      data represents so that the data may be correctly understood by a client\\n      software application.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2837),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2837), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2636), false);
return retVal;
}

static UA_StatusCode function_nodeset_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2837)
);
}

/* EnumStrings - ns=1;i=2833 */

static UA_StatusCode function_nodeset_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2833_variant_DataContents[9];
variablenode_ns_1_i_2833_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "ACTION_COMPLETE");
variablenode_ns_1_i_2833_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "ANNUAL");
variablenode_ns_1_i_2833_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "DAY");
variablenode_ns_1_i_2833_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "MAINTENANCE");
variablenode_ns_1_i_2833_variant_DataContents[4] = UA_LOCALIZEDTEXT("en", "MANUAL");
variablenode_ns_1_i_2833_variant_DataContents[5] = UA_LOCALIZEDTEXT("en", "MONTH");
variablenode_ns_1_i_2833_variant_DataContents[6] = UA_LOCALIZEDTEXT("en", "POWER_ON");
variablenode_ns_1_i_2833_variant_DataContents[7] = UA_LOCALIZEDTEXT("en", "SHIFT");
variablenode_ns_1_i_2833_variant_DataContents[8] = UA_LOCALIZEDTEXT("en", "WEEK");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2833_variant_DataContents, (UA_Int32) 9, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These need to become \\uamodel{Good_} status code in OPC UA. resettrigger\\n      is an optional XML element that identifies the type of event that may\\n      cause a reset to occur. It is additional information regarding the meaning\\n      of the data that establishes an understanding of the time frame that the\\n      data represents so that the data may be correctly understood by a client\\n      software application.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2833),
UA_NODEID_NUMERIC(ns[1], 2636),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2833), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2833)
);
}

/* MTRepresentationType - ns=1;i=2633 */

static UA_StatusCode function_nodeset_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTRepresentationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the \\mtmodel{representation} attribute of the MTConnect\\n      \\gls{MTDataItem}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2633),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTRepresentationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2633)
);
}

/* Default XML - ns=1;i=2831 */

static UA_StatusCode function_nodeset_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the \\mtmodel{representation} attribute of the MTConnect\\n      \\gls{MTDataItem}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2831),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2831), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2633), false);
return retVal;
}

static UA_StatusCode function_nodeset_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2831)
);
}

/* EnumStrings - ns=1;i=2827 */

static UA_StatusCode function_nodeset_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2827_variant_DataContents[3];
variablenode_ns_1_i_2827_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "DISCRETE");
variablenode_ns_1_i_2827_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "TIME_SERIES");
variablenode_ns_1_i_2827_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "VALUE");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2827_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the \\mtmodel{representation} attribute of the MTConnect\\n      \\gls{MTDataItem}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2827),
UA_NODEID_NUMERIC(ns[1], 2633),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2827), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2827)
);
}

/* ThreeSpaceSampleDataType - ns=1;i=2637 */

static UA_StatusCode function_nodeset_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ThreeSpaceSampleDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents a position in a three space coordinate system. The positions\\n      must be given in millimeters.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2637),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ThreeSpaceSampleDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2637)
);
}

/* Default JSON - ns=1;i=2914 */

static UA_StatusCode function_nodeset_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents a position in a three space coordinate system. The positions\\n      must be given in millimeters.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2914),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2914), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2637), false);
return retVal;
}

static UA_StatusCode function_nodeset_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2914)
);
}

/* Default Binary - ns=1;i=2909 */

static UA_StatusCode function_nodeset_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents a position in a three space coordinate system. The positions\\n      must be given in millimeters.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2909),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2909), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2637), false);
return retVal;
}

static UA_StatusCode function_nodeset_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2909)
);
}

/* Default XML - ns=1;i=2912 */

static UA_StatusCode function_nodeset_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents a position in a three space coordinate system. The positions\\n      must be given in millimeters.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2912),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2912), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2637), false);
return retVal;
}

static UA_StatusCode function_nodeset_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2912)
);
}

/* AxisStateDataType - ns=1;i=2200 */

static UA_StatusCode function_nodeset_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2200),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AxisStateDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2200)
);
}

/* Default XML - ns=1;i=2971 */

static UA_StatusCode function_nodeset_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2971),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2971), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2200), false);
return retVal;
}

static UA_StatusCode function_nodeset_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2971)
);
}

/* OpenStateDataType - ns=1;i=2201 */

static UA_StatusCode function_nodeset_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OpenStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2201),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OpenStateDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2201)
);
}

/* Default XML - ns=1;i=3031 */

static UA_StatusCode function_nodeset_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3031),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3031), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2201), false);
return retVal;
}

static UA_StatusCode function_nodeset_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3031)
);
}

/* CompositionStateDataType - ns=1;i=2202 */

static UA_StatusCode function_nodeset_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CompositionStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2202),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CompositionStateDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2202)
);
}

/* Default XML - ns=1;i=2977 */

static UA_StatusCode function_nodeset_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2977),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2977), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2202), false);
return retVal;
}

static UA_StatusCode function_nodeset_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2977)
);
}

/* ControllerModeDataType - ns=1;i=2203 */

static UA_StatusCode function_nodeset_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerModeDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2203),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ControllerModeDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2203)
);
}

/* Default XML - ns=1;i=2983 */

static UA_StatusCode function_nodeset_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2983),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2983), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2203), false);
return retVal;
}

static UA_StatusCode function_nodeset_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2983)
);
}

/* DirectionDataType - ns=1;i=2205 */

static UA_StatusCode function_nodeset_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DirectionDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2205),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DirectionDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2205)
);
}

/* Default XML - ns=1;i=2989 */

static UA_StatusCode function_nodeset_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2989),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2989), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2205), false);
return retVal;
}

static UA_StatusCode function_nodeset_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2989)
);
}

/* YesNoDataType - ns=1;i=2206 */

static UA_StatusCode function_nodeset_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "YesNoDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2206),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "YesNoDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2206)
);
}

/* Default XML - ns=1;i=3055 */

static UA_StatusCode function_nodeset_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3055),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3055), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2206), false);
return retVal;
}

static UA_StatusCode function_nodeset_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3055)
);
}

/* EmergencyStopDataType - ns=1;i=2207 */

static UA_StatusCode function_nodeset_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStopDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2207),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EmergencyStopDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2207)
);
}

/* Default XML - ns=1;i=2995 */

static UA_StatusCode function_nodeset_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2995),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2995), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2207), false);
return retVal;
}

static UA_StatusCode function_nodeset_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2995)
);
}

/* FunctionalModeDataType - ns=1;i=2208 */

static UA_StatusCode function_nodeset_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FunctionalModeDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2208),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "FunctionalModeDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2208)
);
}

/* Default XML - ns=1;i=3007 */

static UA_StatusCode function_nodeset_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3007),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3007), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2208), false);
return retVal;
}

static UA_StatusCode function_nodeset_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3007)
);
}

/* PathModeDataType - ns=1;i=2209 */

static UA_StatusCode function_nodeset_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PathModeDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2209),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PathModeDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2209)
);
}

/* Default XML - ns=1;i=3037 */

static UA_StatusCode function_nodeset_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3037),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3037), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2209), false);
return retVal;
}

static UA_StatusCode function_nodeset_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3037)
);
}

/* ActiveStateDataType - ns=1;i=2197 */

static UA_StatusCode function_nodeset_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ActiveStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2197),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ActiveStateDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2197)
);
}

/* Default XML - ns=1;i=2953 */

static UA_StatusCode function_nodeset_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2953),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2953), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2197), false);
return retVal;
}

static UA_StatusCode function_nodeset_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2953)
);
}

/* AvailabilityDataType - ns=1;i=2198 */

static UA_StatusCode function_nodeset_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AvailabilityDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2198),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AvailabilityDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2198)
);
}

/* Default XML - ns=1;i=2959 */

static UA_StatusCode function_nodeset_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2959),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2959), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2198), false);
return retVal;
}

static UA_StatusCode function_nodeset_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2959)
);
}

/* AxisCouplingDataType - ns=1;i=2199 */

static UA_StatusCode function_nodeset_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisCouplingDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2199),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AxisCouplingDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2199)
);
}

/* Default XML - ns=1;i=2965 */

static UA_StatusCode function_nodeset_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2965),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2965), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2199), false);
return retVal;
}

static UA_StatusCode function_nodeset_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2965)
);
}

/* QualifierDataType - ns=1;i=2668 */

static UA_StatusCode function_nodeset_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "QualifierDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2668),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "QualifierDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2668)
);
}

/* Default XML - ns=1;i=2947 */

static UA_StatusCode function_nodeset_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2947),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2947), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2668), false);
return retVal;
}

static UA_StatusCode function_nodeset_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2947)
);
}

/* EnumStrings - ns=1;i=2943 */

static UA_StatusCode function_nodeset_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2943_variant_DataContents[2];
variablenode_ns_1_i_2943_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "HIGH");
variablenode_ns_1_i_2943_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "LOW");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2943_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2943),
UA_NODEID_NUMERIC(ns[1], 2668),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2943), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2943)
);
}

/* MTSeverityDataType - ns=1;i=2669 */

static UA_StatusCode function_nodeset_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTSeverityDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2669),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTSeverityDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2669)
);
}

/* EnumStrings - ns=1;i=2937 */

static UA_StatusCode function_nodeset_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2937_variant_DataContents[3];
variablenode_ns_1_i_2937_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "FAULT");
variablenode_ns_1_i_2937_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "NORMAL");
variablenode_ns_1_i_2937_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "WARNING");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2937_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2937),
UA_NODEID_NUMERIC(ns[1], 2669),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2937), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2937)
);
}

/* Default XML - ns=1;i=2941 */

static UA_StatusCode function_nodeset_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2941),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2941), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2669), false);
return retVal;
}

static UA_StatusCode function_nodeset_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2941)
);
}

/* MTDataItemSubClassType - ns=1;i=2476 */

static UA_StatusCode function_nodeset_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTDataItemSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       data entity describing a piece of information reported about a piece of\\n      equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 11163),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTDataItemSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2476)
);
}

/* RockwellSubClassType - ns=1;i=2582 */

static UA_StatusCode function_nodeset_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RockwellSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A scale to measure the resistance to deformation of a surface. A scale to\\n      measure the resistance to deformation of a surface.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2582),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RockwellSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2582)
);
}

/* ResponseSubClassType - ns=1;i=2580 */

static UA_StatusCode function_nodeset_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ResponseSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      \\mtmodel{Response} subtype identifies if the data item defined for\\n      MTConnect Interaction Model \\cite{MTCPart5} represents a response. A\\n      subtype of an interface dataitem type to communicate a response.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2580),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ResponseSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2580)
);
}

/* SetUpSubClassType - ns=1;i=2586 */

static UA_StatusCode function_nodeset_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SetUpSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier of the person currently responsible for operating the piece\\n      of equipment. A structural element is being prepared or modified to begin\\n      production of product.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2586),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "SetUpSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2586)
);
}

/* BadSubClassType - ns=1;i=2492 */

static UA_StatusCode function_nodeset_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BadSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Indicates the count of incorrect parts produced. Indicates the count of\\n      incorrect parts produced.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2492),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "BadSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2492)
);
}

/* RotarySubClassType - ns=1;i=2584 */

static UA_StatusCode function_nodeset_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RotarySubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The rotational direction of a rotary motion using the right hand rule\\n      convention. A rotary axis represents any non-linear or rotary movement of\\n      a physical piece of equipment or a portion of the equipment. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2584),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RotarySubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2584)
);
}

/* ShoreSubClassType - ns=1;i=2588 */

static UA_StatusCode function_nodeset_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ShoreSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A scale to measure the resistance to deformation of a surface. A scale to\\n      measure the resistance to deformation of a surface.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2588),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ShoreSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2588)
);
}

/* AScaleSubClassType - ns=1;i=2488 */

static UA_StatusCode function_nodeset_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AScaleSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A Scale weighting factor for the measurement of sound level.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2488),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AScaleSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2488)
);
}

/* MinimumSubClassType - ns=1;i=2542 */

static UA_StatusCode function_nodeset_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MinimumSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Minimum value recorded for the data item during the calculation period.\\n      The lower limit of data reported for a data item.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2542),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MinimumSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2542)
);
}

/* RelativeSubClassType - ns=1;i=2574 */

static UA_StatusCode function_nodeset_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RelativeSubClassType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2574),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RelativeSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2574)
);
}

/* OptionalStopSubClassType - ns=1;i=2556 */

static UA_StatusCode function_nodeset_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OptionalStopSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A setting or operator selection that changes the behavior of the\\n      controller on a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2556),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OptionalStopSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2556)
);
}

/* StandardSubClassType - ns=1;i=2590 */

static UA_StatusCode function_nodeset_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StandardSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The standard or original value of an object. The standard or original\\n      length of an object.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2590),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "StandardSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2590)
);
}

/* AbsoluteSubClassType - ns=1;i=2478 */

static UA_StatusCode function_nodeset_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AbsoluteSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The magnitude or measurement of a type irrespective of its relation to\\n      other values. The position of a block of program code relative to the\\n      beginning of the control program.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2478),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AbsoluteSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2478)
);
}

/* MaximumSubClassType - ns=1;i=2540 */

static UA_StatusCode function_nodeset_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaximumSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Maximum or peak value recorded for the data item during the calculation\\n      period. The upper limit of data reported for a data item.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2540),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaximumSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2540)
);
}

/* ToolGroupSubClassType - ns=1;i=2600 */

static UA_StatusCode function_nodeset_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ToolGroupSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The tool group a specific tool is assigned to in the part program. An\\n      identifier for the tool group associated with a specific tool. Commonly\\n      used to designate spare tools.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2600),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ToolGroupSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2600)
);
}

/* ProgrammedSubClassType - ns=1;i=2568 */

static UA_StatusCode function_nodeset_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgrammedSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The value of a signal or calculation issued to adjust the feedrate of the\\n      axes associated with a \\mtmodel{Path} component when the axes, or a single\\n      axis, are operating as specified by a logic or motion program or set by a\\n      switch. The value of a signal or calculation specified by a logic or\\n      motion program or set by a switch.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2568),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProgrammedSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2568)
);
}

/* ToolSubClassType - ns=1;i=2602 */

static UA_StatusCode function_nodeset_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ToolSubClassType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2602),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ToolSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2602)
);
}

/* LengthSubClassType - ns=1;i=2526 */

static UA_StatusCode function_nodeset_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LengthSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement or extent of something from end to end. The measurement of\\n      the length of an object.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2526),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LengthSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2526)
);
}

/* UasbleSubClassType - ns=1;i=2604 */

static UA_StatusCode function_nodeset_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UasbleSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The remaining useable value of an object.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2604),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "UasbleSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2604)
);
}

/* KineticSubClassType - ns=1;i=2520 */

static UA_StatusCode function_nodeset_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KineticSubClassType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2520),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "KineticSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2520)
);
}

/* VerticalSubClassType - ns=1;i=2606 */

static UA_StatusCode function_nodeset_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VerticalSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the position of a mechanism that may move in a vertical\\n      direction. An indication of the position of a mechanism that may move in a\\n      vertical direction. The mechanism is represented by a composition type\\n      component. The position information indicates whether the composition\\n      element is positioned to the top, to the bottom, or is in transition. The\\n      valid data value must be up value, down value, or transitioning value.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2606),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "VerticalSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2606)
);
}

/* LateralSubClassType - ns=1;i=2522 */

static UA_StatusCode function_nodeset_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LateralSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the position of a mechanism that may move in a lateral\\n      direction. The mechanism is represented by a \\mtmodel{Composition} type\\n      component. An indication of the position of a mechanism that may move in a\\n      lateral direction. The mechanism is represented by a composition type\\n      component. The position information indicates whether the composition\\n      element is positioned to the right, to the left, or is in transition. The\\n      valid dat" "a value must be right value, left value, or transitioning value.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2522),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LateralSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2522)
);
}

/* VolumeSubClassType - ns=1;i=2608 */

static UA_StatusCode function_nodeset_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VolumeSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A measurement of space accupied by a physical object.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2608),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "VolumeSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2608)
);
}

/* PrimarySubClassType - ns=1;i=2560 */

static UA_StatusCode function_nodeset_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PrimarySubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Specific applications MAY reference one or more locations on a piece of\\n      bar stock as the indication for the \\mtmodel{END_OF_BAR}. The main or most\\n      important location MUST be designated as the \\mtmodel{PRIMARY} indication\\n      for the \\mtmodel{END_OF_BAR}. Specific applications MAY reference one or\\n      more locations on a piece of bar stock as the indication for the endofbar\\n      event. The main or most important location must be designated as the\\n      pri" "mary subtype indication for the endofbar event. If no subtype is\\n      specified, primary subtype must be the default endofbar event indication.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2560),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PrimarySubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2560)
);
}

/* ActualSubClassType - ns=1;i=2480 */

static UA_StatusCode function_nodeset_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ActualSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measured value of the a type. The measured value of the data item type\\n      given by a sensor or encoder.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2480),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ActualSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2480)
);
}

/* MohsSubClassType - ns=1;i=2544 */

static UA_StatusCode function_nodeset_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MohsSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A scale to measure the resistance to scratching of a surface. A scale to\\n      measure the resistance to scratching of a surface.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2544),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MohsSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2544)
);
}

/* AlternatingSubClassType - ns=1;i=2486 */

static UA_StatusCode function_nodeset_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AlternatingSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of a type occurring in turn repeatedly. The measurement of\\n      alternating voltage or current. If not specified further in statistic,\\n      defaults to RMS voltage. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2486),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AlternatingSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2486)
);
}

/* ProbeSubClassType - ns=1;i=2564 */

static UA_StatusCode function_nodeset_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProbeSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The position provided by a measurement probe. The position provided by a\\n      measurement probe.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2564),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProbeSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2564)
);
}

/* AllSubClassType - ns=1;i=2484 */

static UA_StatusCode function_nodeset_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AllSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       The count of all the parts produced. If the subtype is not given, this is\\n      the default.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2484),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AllSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2484)
);
}

/* ProcessSubClassType - ns=1;i=2566 */

static UA_StatusCode function_nodeset_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProcessSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the time from the beginning of production of a part or\\n      product on a piece of equipment until the time that production is complete\\n      for that part or product on that piece of equipment. This includes the\\n      time that the piece of equipment is running, producing parts or products,\\n      or in the process of producing parts. The measurement of the time from the\\n      beginning of production of a part or product on a piece of equipment until\\n     " " the time that production is complete for that part or product on that\\n      piece of equipment. This includes the time that the piece of equipment is\\n      running, producing parts or products, or in the process of producing\\n      parts.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2566),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProcessSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2566)
);
}

/* DirectSubClassType - ns=1;i=2508 */

static UA_StatusCode function_nodeset_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DirectSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Measurement of DC current or voltage. The measurement of DC current or voltage.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2508),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DirectSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2508)
);
}

/* ControlSubClassType - ns=1;i=2502 */

static UA_StatusCode function_nodeset_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControlSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The state of the enabling signal or control logic that enables or disables\\n      the function or operation of the \\textit{Structural Element}. The state of\\n      the enabling signal or control logic that enables or disables the function\\n      or operation of the structural element.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2502),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ControlSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2502)
);
}

/* GoodSubClassType - ns=1;i=2500 */

static UA_StatusCode function_nodeset_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GoodSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Indicates the count of correct parts made. Indicates the count of correct\\n      parts made.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2500),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "GoodSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2500)
);
}

/* DelaySubClassType - ns=1;i=2506 */

static UA_StatusCode function_nodeset_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DelaySubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Measurement of the time that a piece of equipment is waiting for an event\\n      or an action to occur. A piece of equipment waiting for an event or an\\n      action to occur.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2506),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DelaySubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2506)
);
}

/* CScaleSubClassType - ns=1;i=2504 */

static UA_StatusCode function_nodeset_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CScaleSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "C Scale weighting factor for the measurement of sound level.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2504),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CScaleSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2504)
);
}

/* TargetSubClassType - ns=1;i=2594 */

static UA_StatusCode function_nodeset_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TargetSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Indicates the number of parts that are projected or planned to be\\n      produced. The desired measure or count for a data item value.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2594),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TargetSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2594)
);
}

/* ToolChangeStopSubClassType - ns=1;i=2596 */

static UA_StatusCode function_nodeset_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ToolChangeStopSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A setting or operator selection that changes the behavior of the\\n      controller on a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2596),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ToolChangeStopSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2596)
);
}

/* MaintenanceSubClassType - ns=1;i=2536 */

static UA_StatusCode function_nodeset_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaintenanceSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier of the person currently responsible for performing\\n      maintenance on the piece of equipment. Action related to maintenance on\\n      the piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2536),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaintenanceSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2536)
);
}

/* ActionSubClassType - ns=1;i=2482 */

static UA_StatusCode function_nodeset_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ActionSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the operating state or value of a type. An indication of\\n      the operating state of a mechanism represented by a composition type\\n      component. The operating state indicates whether the composition element\\n      is activated or disabled. The valid data value must be active value or\\n      inactive value.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2482),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ActionSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2482)
);
}

/* SwitchedSubClassType - ns=1;i=2592 */

static UA_StatusCode function_nodeset_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SwitchedSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the activation state of a mechanism represented by a\\n      \\mtmodel{Composition} type component. The activation state indicates\\n      whether the \\mtmodel{Composition} element is activated or not. An\\n      indication of the activation state of a mechanism represented by a\\n      composition type component. The activation state indicates whether the\\n      composition element is activated or not. The valid data value must be on\\n      value or off value.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2592),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "SwitchedSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2592)
);
}

/* RequestSubClassType - ns=1;i=2578 */

static UA_StatusCode function_nodeset_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RequestSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      \\mtmodel{Request} subtype identifies if the data item defined for\\n      MTConnect Interaction Model \\cite{MTCPart5} represents a request. A\\n      subtype of an interface dataitem type to communicate a request. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2578),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RequestSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2578)
);
}

/* BrinellSubClassType - ns=1;i=2494 */

static UA_StatusCode function_nodeset_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BrinellSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A scale to measure the resistance to deformation of a surface. A scale to\\n      measure the resistance to deformation of a surface.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2494),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "BrinellSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2494)
);
}

/* LeebSubClassType - ns=1;i=2524 */

static UA_StatusCode function_nodeset_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LeebSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A scale to measure the elasticity of a surface. A scale to measure the\\n      elasticity of a surface.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2524),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LeebSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2524)
);
}

/* MotionSubClassType - ns=1;i=2548 */

static UA_StatusCode function_nodeset_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the open or closed state of a mechanism. The mechanism is\\n      represented by a \\mtmodel{Composition} type component. An indication of\\n      the open or closed state of a mechanism. The mechanism is represented by a\\n      composition type component. The operating state indicates whether the\\n      state of the composition element is open, closed, or unlatched. The valid\\n      data value must be open value, unlatched value, or closed value.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2548),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MotionSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2548)
);
}

/* ToolEdgeSubClassType - ns=1;i=2598 */

static UA_StatusCode function_nodeset_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ToolEdgeSubClassType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2598),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ToolEdgeSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2598)
);
}

/* MachineAxisLockSubClassType - ns=1;i=2534 */

static UA_StatusCode function_nodeset_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MachineAxisLockSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A setting or operator selection that changes the behavior of the\\n      controller on a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2534),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MachineAxisLockSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2534)
);
}

/* MoleSubClassType - ns=1;i=2546 */

static UA_StatusCode function_nodeset_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MoleSubClassType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2546),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MoleSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2546)
);
}

/* OverrideSubClassType - ns=1;i=2558 */

static UA_StatusCode function_nodeset_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OverrideSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The operator's overridden value. DEPRECATED: The operators overridden\\n      value.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2558),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OverrideSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2558)
);
}

/* LinearSubClassType - ns=1;i=2528 */

static UA_StatusCode function_nodeset_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LinearSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The direction of motion. A linear axis represents the movement of a\\n      physical piece of equipment, or a portion of the equipment, in a straight\\n      line. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2528),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LinearSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2528)
);
}

/* LoadedSubClassType - ns=1;i=2532 */

static UA_StatusCode function_nodeset_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LoadedSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication that the sub-parts of a piece of equipment are under load.\\n      Subparts of a piece of equipment are under load.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2532),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LoadedSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2532)
);
}

/* NoScaleSubClassType - ns=1;i=2550 */

static UA_StatusCode function_nodeset_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NoScaleSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "No weighting factor on the frequency scale for the measurement of sound level.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2550),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "NoScaleSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2550)
);
}

/* CommandedSubClassType - ns=1;i=2498 */

static UA_StatusCode function_nodeset_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CommandedSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The value as specified by the Controller type component. A value specified\\n      by the controller type component.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2498),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CommandedSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2498)
);
}

/* OperatingSubClassType - ns=1;i=2552 */

static UA_StatusCode function_nodeset_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperatingSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication that the major sub-parts of a piece of equipment are powered\\n      or performing any activity whether producing a part or product or not.\\n      Example: For traditional machine tools, this includes when the piece of\\n      equipment is \\mtmodel{WORKING} or it is idle. A piece of equipment are\\n      powered or performing any activity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2552),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OperatingSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2552)
);
}

/* OperatorSubClassType - ns=1;i=2554 */

static UA_StatusCode function_nodeset_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperatorSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier of the person currently responsible for operating the piece\\n      of equipment. The identifier of the person currently responsible for\\n      operating the piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2554),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OperatorSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2554)
);
}

/* LineSubClassType - ns=1;i=2530 */

static UA_StatusCode function_nodeset_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LineSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The state of the power source for the \\textit{Structural Element}.\\n      DEPRECATED in Version 1.4.0.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2530),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LineSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2530)
);
}

/* PoweredSubClassType - ns=1;i=2562 */

static UA_StatusCode function_nodeset_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PoweredSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication that primary power is applied to the piece of equipment and,\\n      as a minimum, the controller or logic portion of the piece of equipment is\\n      powered and functioning or components that are required to remain on are\\n      powered. Primary power is applied to the piece of equipment and, as a\\n      minimum, the controller or logic portion of the piece of equipment is\\n      powered and functioning or components that are required to remain on are\\n      powered" ".\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2562),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PoweredSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2562)
);
}

/* RapidSubClassType - ns=1;i=2572 */

static UA_StatusCode function_nodeset_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RapidSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The value of a signal or calculation issued to adjust the feedrate of the\\n      axes associated with a \\mtmodel{Path} component when the axes, or a single\\n      axis, are being operated in a rapid positioning mode or method (rapid).\\n      The value of a signal or calculation issued to adjust the feedrate of a\\n      component or composition that is operating in a rapid positioning mode.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2572),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RapidSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2572)
);
}

/* WorkpieceSubClassType - ns=1;i=2616 */

static UA_StatusCode function_nodeset_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WorkpieceSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A physical object being or to be worked on with a tool or machine.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2616),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "WorkpieceSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2616)
);
}

/* RadialSubClassType - ns=1;i=2570 */

static UA_StatusCode function_nodeset_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RadialSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A reference to a radial type tool offset variable. A reference to a radial\\n      type tool offset variable.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2570),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RadialSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2570)
);
}

/* WorkingSubClassType - ns=1;i=2614 */

static UA_StatusCode function_nodeset_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WorkingSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication that a piece of equipment is performing any activity. A\\n      piece of equipment performing any activity, the equipment is active and\\n      performing a function under load or not.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2614),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "WorkingSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2614)
);
}

/* RemainingSubClassType - ns=1;i=2576 */

static UA_StatusCode function_nodeset_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RemainingSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The remaining amount of the type specified. Remaining measure of an object\\n      or an action.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2576),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RemainingSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2576)
);
}

/* WeightSubClassType - ns=1;i=2612 */

static UA_StatusCode function_nodeset_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WeightSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A physical object's relative mass. The total weight of the Cutting\\n      Tool in grams. The force exerted by the mass of the Cutting Tool. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2612),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "WeightSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2612)
);
}

/* ManualUnclampSubClassType - ns=1;i=2538 */

static UA_StatusCode function_nodeset_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ManualUnclampSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the state of an operator controlled interlock that can\\n      inhibit the ability to initiate an unclamp action of an electronically\\n      controlled chuck.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2538),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ManualUnclampSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2538)
);
}

/* BScaleSubClassType - ns=1;i=2496 */

static UA_StatusCode function_nodeset_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BScaleSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "B Scale weighting factor for the measurement of sound level.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2496),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "BScaleSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2496)
);
}

/* VickersSubClassType - ns=1;i=2610 */

static UA_StatusCode function_nodeset_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VickersSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A scale to measure the resistance to deformation of a surface. A scale to\\n      measure the resistance to deformation of a surface.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2610),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "VickersSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2610)
);
}

/* JobSubClassType - ns=1;i=2518 */

static UA_StatusCode function_nodeset_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "JobSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The value of a signal or calculation issued to adjust the feedrate of the\\n      axes associated with a Path component when the axes, or a single axis, are\\n      being operated in a manual mode or method (jogging).\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2518),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "JobSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2518)
);
}

/* AuxiliarySubClassType - ns=1;i=2490 */

static UA_StatusCode function_nodeset_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AuxiliarySubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Example: When multiple locations on a piece of bar stock are referenced as\\n      the indication for the \\mtmodel{END_OF_BAR}, the additional location(s)\\n      MUST be designated as \\mtmodel{AUXILIARY} indication(s) for the\\n      \\mtmodel{END_OF_BAR}. When multiple locations on a piece of bar stock are\\n      referenced as the indication for the endofbar event, the additional\\n      location(s) must be designated as auxiliary subtype indication(s) for the\\n      endofbar even" "t. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2490),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AuxiliarySubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2490)
);
}

/* FixtureSubClassType - ns=1;i=2514 */

static UA_StatusCode function_nodeset_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Fixture denotes a specifc type of a piece of equipment.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2514),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "FixtureSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2514)
);
}

/* IncrementalSubClassType - ns=1;i=2516 */

static UA_StatusCode function_nodeset_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IncrementalSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A small change which could be either positive or negative in a Type's\\n      value or function. Example: The position of a block of program code\\n      relative to the occurrence of the last \\mtmodel{LINE_LABEL} encountered in\\n      the control program. The position of a block of program code relative to\\n      the occurrence of the last linelabel event encountered in the control\\n      program.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2516),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "IncrementalSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2516)
);
}

/* DryRunSubClassType - ns=1;i=2510 */

static UA_StatusCode function_nodeset_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DryRunSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A setting or operator selection used to execute a test mode to confirm the\\n      execution of machine functions.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2510),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DryRunSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2510)
);
}

/* DScaleSubClassType - ns=1;i=2512 */

static UA_StatusCode function_nodeset_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DScaleSubClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "D Scale weighting factor for the measurement of sound level.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2512),
UA_NODEID_NUMERIC(ns[1], 2476),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DScaleSubClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2512)
);
}

/* MTAssetEventType - ns=1;i=2621 */

static UA_StatusCode function_nodeset_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2618);
attr.displayName = UA_LOCALIZEDTEXT("", "MTAssetEventType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The asset events have an additional attribute regarding the asset change\\n      or removal identifier and the type of asset that is being reported.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTAssetEventType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2621)
);
}

/* XmlId - ns=1;i=2751 */

static UA_StatusCode function_nodeset_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2751),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2751), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2751)
);
}

/* Category - ns=1;i=2753 */

static UA_StatusCode function_nodeset_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2634);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2753),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2753), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2753)
);
}

/* Name - ns=1;i=2752 */

static UA_StatusCode function_nodeset_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2752),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2752), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2752)
);
}

/* MTTypeName - ns=1;i=2754 */

static UA_StatusCode function_nodeset_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2754),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2754), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2754)
);
}

/* SampleRate - ns=1;i=2757 */

static UA_StatusCode function_nodeset_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2757),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2757), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2757)
);
}

/* SourceData - ns=1;i=2756 */

static UA_StatusCode function_nodeset_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2756),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SourceData"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2756), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2756)
);
}

/* PeriodFilter - ns=1;i=2759 */

static UA_StatusCode function_nodeset_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "PeriodFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2759),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "PeriodFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2759), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2759)
);
}

/* Representation - ns=1;i=2758 */

static UA_StatusCode function_nodeset_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2633);
attr.displayName = UA_LOCALIZEDTEXT("", "Representation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2758),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Representation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2758), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2758)
);
}

/* MTSubTypeName - ns=1;i=2755 */

static UA_StatusCode function_nodeset_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2755),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2755), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2755)
);
}

/* MTControlledVocabEventType - ns=1;i=2626 */

static UA_StatusCode function_nodeset_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 28);
attr.displayName = UA_LOCALIZEDTEXT("", "MTControlledVocabEventType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      All \\glspl{MTDataItem} with \\gls{category} \\mtmodel{EVENT} having\\n      Controlled Vocabularies (Enumerations) will be added as sub-types of this\\n      type which is mapped to the OPC/UA MultiStateValueDiscreteType. Otherwise,\\n      either \\mtmodel{MTString} or \\mtmodel{MTNumeric} will be used. All\\n      subtypes are direct representations of the MTConnect equivalent elements\\n      that can be found in the MTConnect Part 3 \\cite{MTCPart3} documents.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 2376),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTControlledVocabEventType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2626)
);
}

/* Representation - ns=1;i=2778 */

static UA_StatusCode function_nodeset_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2633);
attr.displayName = UA_LOCALIZEDTEXT("", "Representation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2778),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Representation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2778), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2778)
);
}

/* PeriodFilter - ns=1;i=2779 */

static UA_StatusCode function_nodeset_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "PeriodFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2779),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "PeriodFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2779), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2779)
);
}

/* ValueAsText - ns=1;i=3090 */

static UA_StatusCode function_nodeset_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueAsText");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      All \\glspl{MTDataItem} with \\gls{category} \\mtmodel{EVENT} having\\n      Controlled Vocabularies (Enumerations) will be added as sub-types of this\\n      type which is mapped to the OPC/UA MultiStateValueDiscreteType. Otherwise,\\n      either \\mtmodel{MTString} or \\mtmodel{MTNumeric} will be used. All\\n      subtypes are direct representations of the MTConnect equivalent elements\\n      that can be found in the MTConnect Part 3 \\cite{MTCPart3} documents.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3090),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ValueAsText"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3090), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3090)
);
}

/* Name - ns=1;i=2772 */

static UA_StatusCode function_nodeset_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2772),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2772), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2772)
);
}

/* Category - ns=1;i=2773 */

static UA_StatusCode function_nodeset_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2634);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2773),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2773), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2773)
);
}

/* XmlId - ns=1;i=2771 */

static UA_StatusCode function_nodeset_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2771),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2771), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2771)
);
}

/* SourceData - ns=1;i=2776 */

static UA_StatusCode function_nodeset_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2776),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SourceData"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2776), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2776)
);
}

/* SampleRate - ns=1;i=2777 */

static UA_StatusCode function_nodeset_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2777),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2777), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2777)
);
}

/* MTTypeName - ns=1;i=2774 */

static UA_StatusCode function_nodeset_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2774),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2774), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2774)
);
}

/* MTSubTypeName - ns=1;i=2775 */

static UA_StatusCode function_nodeset_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2775),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2775), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2775)
);
}

/* MTDescriptionType - ns=1;i=2053 */

static UA_StatusCode function_nodeset_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTDescriptionType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2053),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTDescriptionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2053)
);
}

/* SerialNumber - ns=1;i=2055 */

static UA_StatusCode function_nodeset_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2055),
UA_NODEID_NUMERIC(ns[1], 2053),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2055), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2055)
);
}

/* Station - ns=1;i=2054 */

static UA_StatusCode function_nodeset_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Station");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2054),
UA_NODEID_NUMERIC(ns[1], 2053),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Station"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2054), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2054)
);
}

/* Data - ns=1;i=2057 */

static UA_StatusCode function_nodeset_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Data");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2057),
UA_NODEID_NUMERIC(ns[1], 2053),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Data"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2057), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2057)
);
}

/* Manufacturer - ns=1;i=2056 */

static UA_StatusCode function_nodeset_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2056),
UA_NODEID_NUMERIC(ns[1], 2053),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2056), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2056)
);
}

/* MTChannelType - ns=1;i=2059 */

static UA_StatusCode function_nodeset_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTChannelType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A Channel of a sensor. See ChannelType in type specifications. channel\\n      represents each sensing element connected to a sensor unit.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2059),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTChannelType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2059)
);
}

/* NextCalibrationDate - ns=1;i=2064 */

static UA_StatusCode function_nodeset_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "NextCalibrationDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A Channel of a sensor. See ChannelType in type specifications. channel\\n      represents each sensing element connected to a sensor unit.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2064),
UA_NODEID_NUMERIC(ns[1], 2059),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NextCalibrationDate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2064), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2064)
);
}

/* CalibrationInitials - ns=1;i=2065 */

static UA_StatusCode function_nodeset_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "CalibrationInitials");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A Channel of a sensor. See ChannelType in type specifications. channel\\n      represents each sensing element connected to a sensor unit.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2065),
UA_NODEID_NUMERIC(ns[1], 2059),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "CalibrationInitials"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2065), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2065)
);
}

/* MTDescription - ns=1;i=2062 */

static UA_StatusCode function_nodeset_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTDescription");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A Channel of a sensor. See ChannelType in type specifications. channel\\n      represents each sensing element connected to a sensor unit.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2062),
UA_NODEID_NUMERIC(ns[1], 2059),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTDescription"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2062), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2062)
);
}

/* CalibrationDate - ns=1;i=2063 */

static UA_StatusCode function_nodeset_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "CalibrationDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A Channel of a sensor. See ChannelType in type specifications. channel\\n      represents each sensing element connected to a sensor unit.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2063),
UA_NODEID_NUMERIC(ns[1], 2059),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "CalibrationDate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2063), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2063)
);
}

/* Number - ns=1;i=2060 */

static UA_StatusCode function_nodeset_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A Channel of a sensor. See ChannelType in type specifications. channel\\n      represents each sensing element connected to a sensor unit.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2060),
UA_NODEID_NUMERIC(ns[1], 2059),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Number"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2060), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2060)
);
}

/* Name - ns=1;i=2061 */

static UA_StatusCode function_nodeset_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A Channel of a sensor. See ChannelType in type specifications. channel\\n      represents each sensing element connected to a sensor unit.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2061),
UA_NODEID_NUMERIC(ns[1], 2059),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2061), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2061)
);
}

/* MTComponentType - ns=1;i=2021 */

static UA_StatusCode function_nodeset_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTComponentType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTComponentType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2021)
);
}

/* AxesType - ns=1;i=2078 */

static UA_StatusCode function_nodeset_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxesType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Organizes parts of the device that perform linear or rotational motion An\\n      XML container used to organize the structural element of a piece of\\n      equipment that perform linear or rotational motion.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2078),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AxesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2078)
);
}

/* LinearType - ns=1;i=2110 */

static UA_StatusCode function_nodeset_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LinearType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the movement of a physical piece of equipment, or a portion of the\\n      equipment, in a straight line. A linear axis represents the movement of a\\n      physical piece of equipment, or a portion of the equipment, in a straight\\n      line. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2110),
UA_NODEID_NUMERIC(ns[1], 2078),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LinearType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2110)
);
}

/* RotaryType - ns=1;i=2132 */

static UA_StatusCode function_nodeset_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RotaryType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      rotary movement of a physical piece of equipment or a portion of the\\n      equipment. A rotary axis represents any non-linear or rotary movement of a\\n      physical piece of equipment or a portion of the equipment. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2132),
UA_NODEID_NUMERIC(ns[1], 2078),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RotaryType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2132)
);
}

/* ChuckType - ns=1;i=2086 */

static UA_StatusCode function_nodeset_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ChuckType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      provides the information about a mechanism that holds a part or stock\\n      material in place Chuck is an XML container that provides the information\\n      about a mechanism that holds a part or stock material in place.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2086),
UA_NODEID_NUMERIC(ns[1], 2132),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ChuckType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2086)
);
}

/* AuxiliariesType - ns=1;i=2076 */

static UA_StatusCode function_nodeset_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AuxiliariesType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      representing functional sub-systems that provide supplementary or extended\\n      capabilities for a piece of equipment, but they are not required for the\\n      basic operation of the equipment An XML container used to organize\\n      information for lower level elements representing functional sub-systems\\n      that provide supplementary or extended capabilities for a piece of\\n      equipment, but they are not required for the basic operation of the\\n      equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2076),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AuxiliariesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2076)
);
}

/* SensorType - ns=1;i=2134 */

static UA_StatusCode function_nodeset_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SensorType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for a piece of equipment that responds to a physical\\n      stimulus and transmits a resulting impulse or value from a sensing unit\\n      The sensor unit is modeled as a lower level component called sensor.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2134),
UA_NODEID_NUMERIC(ns[1], 2076),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "SensorType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2134)
);
}

/* BarFeederType - ns=1;i=2082 */

static UA_StatusCode function_nodeset_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BarFeederType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      a unit involved in delivering bar stock to a piece of equipment. barfeeder\\n      is an XML container that represents the information for a unit involved in\\n      delivering bar stock to a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2082),
UA_NODEID_NUMERIC(ns[1], 2076),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "BarFeederType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2082)
);
}

/* WasteDisposalType - ns=1;i=2142 */

static UA_StatusCode function_nodeset_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WasteDisposalType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for a unit comprised of all the parts involved in removing\\n      manufacturing byproducts from a piece of equipment wastedisposal is an XML\\n      container that represents the information for a unit comprised of all the\\n      parts involved in removing manufacturing byproducts from a piece of\\n      equipment. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2142),
UA_NODEID_NUMERIC(ns[1], 2076),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "WasteDisposalType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2142)
);
}

/* ToolingDeliveryType - ns=1;i=2140 */

static UA_StatusCode function_nodeset_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ToolingDeliveryType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      a unit involved in managing, positioning, storing, and delivering tooling\\n      within a piece of equipment. toolingdelivery is an XML container that\\n      represents the information for a unit involved in managing, positioning,\\n      storing, and delivering tooling within a piece of equipment. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2140),
UA_NODEID_NUMERIC(ns[1], 2076),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ToolingDeliveryType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2140)
);
}

/* EnvironmentalType - ns=1;i=2102 */

static UA_StatusCode function_nodeset_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EnvironmentalType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for a unit or function involved in monitoring, managing,\\n      or conditioning the environment around or within a piece of equipment.\\n      environmental is an XML container that represents the information for a\\n      unit or function involved in monitoring, managing, or conditioning the\\n      environment around or within a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2102),
UA_NODEID_NUMERIC(ns[1], 2076),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EnvironmentalType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2102)
);
}

/* LoaderType - ns=1;i=2112 */

static UA_StatusCode function_nodeset_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LoaderType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for a unit comprised of all the parts involved in moving\\n      and distributing materials, parts, tooling, and other items to or from a\\n      piece of equipment loader is an XML container that represents the\\n      information for a unit comprised of all the parts involved in moving and\\n      distributing materials, parts, tooling, and other items to or from a piece\\n      of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2112),
UA_NODEID_NUMERIC(ns[1], 2076),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LoaderType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2112)
);
}

/* Compositions - ns=1;i=2043 */

static UA_StatusCode function_nodeset_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Compositions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2043),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Compositions"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2043), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2043)
);
}

/* Components - ns=1;i=2042 */

static UA_StatusCode function_nodeset_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Components");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2042),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Components"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2042), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2042)
);
}

/* SystemsType - ns=1;i=2138 */

static UA_StatusCode function_nodeset_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SystemsType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      major sub-systems that are permanently integrated into a piece of\\n      equipment An XML container used to organize information for lower level\\n      elements representing the major sub-systems that are permanently\\n      integrated into a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "SystemsType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2138)
);
}

/* HydraulicType - ns=1;i=2106 */

static UA_StatusCode function_nodeset_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HydraulicType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      system comprised of all the parts involved in moving and distributing\\n      pressurized liquid throughout the piece of equipment. hydraulic is an XML\\n      container that represents the information for a system comprised of all\\n      the parts involved in moving and distributing pressurized liquid\\n      throughout the piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2106),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HydraulicType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2106)
);
}

/* LubricationType - ns=1;i=2114 */

static UA_StatusCode function_nodeset_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LubricationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      a system comprised of all the parts involved in distribution and\\n      management of fluids used to lubricate portions of the piece of equipment.\\n      lubrication is an XML container that represents the information for a\\n      system comprised of all the parts involved in distribution and management\\n      of fluids used to lubricate portions of the piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2114),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LubricationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2114)
);
}

/* FeederType - ns=1;i=2104 */

static UA_StatusCode function_nodeset_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FeederType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for a system that manages the delivery of materials within\\n      a piece of equipment. feeder is an XML container that represents the\\n      information for a system that manages the delivery of materials within a\\n      piece of equipment. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2104),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "FeederType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2104)
);
}

/* ElectricType - ns=1;i=2098 */

static UA_StatusCode function_nodeset_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ElectricType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      represents the information for the main power supply for device piece of\\n      equipment and the distribution of that power throughout the equipment.\\n      electric is an XML container that represents the information for the main\\n      power supply for device piece of equipment and the distribution of that\\n      power throughout the equipment. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2098),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ElectricType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2098)
);
}

/* EnclosureType - ns=1;i=2100 */

static UA_StatusCode function_nodeset_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EnclosureType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      a structure used to contain or isolate a piece of equipment or area.\\n      enclosure is an XML container that represents the information for a\\n      structure used to contain or isolate a piece of equipment or area.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2100),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EnclosureType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2100)
);
}

/* CoolantType - ns=1;i=2090 */

static UA_StatusCode function_nodeset_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CoolantType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      a system comprised of all the parts involved in distribution and\\n      management of fluids that remove heat from a piece of equipment. coolant\\n      is an XML container that represents the information for a system comprised\\n      of all the parts involved in distribution and management of fluids that\\n      remove heat from a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2090),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CoolantType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2090)
);
}

/* DielectricType - ns=1;i=2092 */

static UA_StatusCode function_nodeset_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DielectricType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      a system that manages a chemical mixture used in a manufacturing process\\n      being performed at that piece of equipment. dielectric is an XML container\\n      that represents the information for a system that manages a chemical\\n      mixture used in a manufacturing process being performed at that piece of\\n      equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2092),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DielectricType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2092)
);
}

/* ProcessPowerType - ns=1;i=2126 */

static UA_StatusCode function_nodeset_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProcessPowerType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for a power source associated with a piece of equipment\\n      that supplies energy to the manufacturing process separate from the\\n      Electric system processpower is an XML container that represents the\\n      information for a power source associated with a piece of equipment that\\n      supplies energy to the manufacturing process separate from the electric\\n      system.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2126),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProcessPowerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2126)
);
}

/* ProtectiveType - ns=1;i=2128 */

static UA_StatusCode function_nodeset_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProtectiveType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for those functions that detect or prevent harm or damage\\n      to equipment or personnel. Protective is an XML container that represents\\n      the information for those functions that detect or prevent harm or damage\\n      to equipment or personnel.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2128),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProtectiveType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2128)
);
}

/* PneumaticType - ns=1;i=2124 */

static UA_StatusCode function_nodeset_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PneumaticType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      a system comprised of all the parts involved in moving and distributing\\n      pressurized gas throughout the piece of equipment. pneumatic is an XML\\n      container that represents the information for a system comprised of all\\n      the parts involved in moving and distributing pressurized gas throughout\\n      the piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2124),
UA_NODEID_NUMERIC(ns[1], 2138),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PneumaticType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2124)
);
}

/* ControllerType - ns=1;i=2088 */

static UA_StatusCode function_nodeset_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      intelligent or computational function within a piece of equipment An XML\\n      container used to organize information about an intelligent or\\n      computational function within a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2088),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ControllerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2088)
);
}

/* PathType - ns=1;i=2120 */

static UA_StatusCode function_nodeset_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PathType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      information for an independent operation or function within a\\n      \\mtuatype{ControllerType} path is an XML container that represents the\\n      information for an independent operation or function within a controller.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2120),
UA_NODEID_NUMERIC(ns[1], 2088),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PathType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2120)
);
}

/* InterfacesType - ns=1;i=2108 */

static UA_StatusCode function_nodeset_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfacesType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       An XML container that organizes information used to coordinate actions\\n      and activities between pieces of equipment that communicate information\\n      between each other. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2108),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "InterfacesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2108)
);
}

/* BarFeederInterfaceType - ns=1;i=2080 */

static UA_StatusCode function_nodeset_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BarFeederInterfaceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      information used to coordinate the operations between a Bar Feeder and\\n      another piece of equipment barfeederinterface provides the set of\\n      information used to coordinate the operations between a Bar Feeder and\\n      another piece of equipment. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2080),
UA_NODEID_NUMERIC(ns[1], 2108),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "BarFeederInterfaceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2080)
);
}

/* MaterialHandlerInterfaceType - ns=1;i=2116 */

static UA_StatusCode function_nodeset_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialHandlerInterfaceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      set of information used to coordinate the operations between a piece of\\n      equipment and another associated piece of equipment used to automatically\\n      handle various types of materials or services associated with the original\\n      piece of equipment materialhandlerinterface provides the set of\\n      information used to coordinate the operations between a piece of equipment\\n      and another associated piece of equipment used to automatically handle\\n      various type" "s of materials or services associated with the original piece\\n      of equipment. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2116),
UA_NODEID_NUMERIC(ns[1], 2108),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialHandlerInterfaceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2116)
);
}

/* DoorInterfaceType - ns=1;i=2094 */

static UA_StatusCode function_nodeset_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DoorInterfaceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      information used to coordinate the operations between two pieces of\\n      equipment, one of which controls the operation of a door doorinterface\\n      provides the set of information used to coordinate the operations between\\n      two pieces of equipment, one of which controls the operation of a door. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2094),
UA_NODEID_NUMERIC(ns[1], 2108),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DoorInterfaceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2094)
);
}

/* ChuckInterfaceType - ns=1;i=2084 */

static UA_StatusCode function_nodeset_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ChuckInterfaceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      information used to coordinate the operations between two pieces of\\n      equipment, one of which controls the operation of a chuck chuckinterface\\n      provides the set of information used to coordinate the operations between\\n      two pieces of equipment, one of which controls the operation of a chuck. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2084),
UA_NODEID_NUMERIC(ns[1], 2108),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ChuckInterfaceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2084)
);
}

/* DoorType - ns=1;i=2096 */

static UA_StatusCode function_nodeset_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DoorType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for a mechanical mechanism or closure that can cover, for\\n      example, a physical access portal into a piece of equipment door component\\n      is an XML container that represents the information for a mechanical\\n      mechanism or closure that can cover.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2096),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DoorType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2096)
);
}

/* ResourcesType - ns=1;i=2130 */

static UA_StatusCode function_nodeset_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ResourcesType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       An XML container used to organize information for lower level elements\\n      representing types of items, materials, and personnel that support the\\n      operation of a piece of equipment or work to be performed at a location.\\n      resources also represents materials or other items consumed or transformed\\n      by a piece of equipment for production of parts or other types of goods.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2130),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ResourcesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2130)
);
}

/* MaterialsType - ns=1;i=2118 */

static UA_StatusCode function_nodeset_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialsType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      information about materials or other items consumed or used by the piece\\n      of equipment for production of parts, materials, or other types of goods\\n      materials is an XML container that provides information about materials or\\n      other items consumed or used by the piece of equipment for production of\\n      parts, materials, or other types of goods.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2118),
UA_NODEID_NUMERIC(ns[1], 2130),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialsType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2118)
);
}

/* StockType - ns=1;i=2136 */

static UA_StatusCode function_nodeset_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StockType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for the material that is used in a manufacturing process\\n      and to which work is applied in a machine or piece of equipment to produce\\n      parts. stock is an XML container that represents the information for the\\n      material that is used in a manufacturing process and to which work is\\n      applied in a machine or piece of equipment to produce parts.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2136),
UA_NODEID_NUMERIC(ns[1], 2118),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "StockType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2136)
);
}

/* PersonnelType - ns=1;i=2122 */

static UA_StatusCode function_nodeset_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PersonnelType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       personnel is an XML container that provides information about an\\n      individual or individuals who either control, support, or otherwise\\n      interface with a piece of equipment. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2122),
UA_NODEID_NUMERIC(ns[1], 2130),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PersonnelType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2122)
);
}

/* ActuatorType - ns=1;i=2074 */

static UA_StatusCode function_nodeset_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ActuatorType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      the information for an apparatus for moving or controlling a mechanism or\\n      system Redefined as a piece of equipment with the ability to be\\n      represented as a lower level component of a parent component element or as\\n      a composition element. See actuator type\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2074),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ActuatorType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2074)
);
}

/* Name - ns=1;i=2023 */

static UA_StatusCode function_nodeset_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2023),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2023), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2023)
);
}

/* XmlId - ns=1;i=2022 */

static UA_StatusCode function_nodeset_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2022),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2022), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2022)
);
}

/* Uuid - ns=1;i=2025 */

static UA_StatusCode function_nodeset_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Uuid");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2025),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Uuid"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2025), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2025)
);
}

/* NativeName - ns=1;i=2024 */

static UA_StatusCode function_nodeset_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NativeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2024),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NativeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2024), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2024)
);
}

/* SampleInterval - ns=1;i=2027 */

static UA_StatusCode function_nodeset_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleInterval");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2027),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleInterval"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2027), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2027)
);
}

/* SampleRate - ns=1;i=2026 */

static UA_StatusCode function_nodeset_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2026),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2026), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2026)
);
}

/* MTDeviceType - ns=1;i=2015 */

static UA_StatusCode function_nodeset_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTDeviceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      See DeviceType.tex. The primary container element for each piece of\\n      equipment. device is organized within the devices container.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2015),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTDeviceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2015)
);
}

/* Iso841Class - ns=1;i=2017 */

static UA_StatusCode function_nodeset_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Iso841Class");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      See DeviceType.tex. The primary container element for each piece of\\n      equipment. device is organized within the devices container.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2017),
UA_NODEID_NUMERIC(ns[1], 2015),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Iso841Class"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2017), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2017)
);
}

/* Version - ns=1;i=2016 */

static UA_StatusCode function_nodeset_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      See DeviceType.tex. The primary container element for each piece of\\n      equipment. device is organized within the devices container.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2016),
UA_NODEID_NUMERIC(ns[1], 2015),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2016), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2016)
);
}

/* Uuid - ns=1;i=3669 */

static UA_StatusCode function_nodeset_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Uuid");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      See DeviceType.tex. The primary container element for each piece of\\n      equipment. device is organized within the devices container.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3669),
UA_NODEID_NUMERIC(ns[1], 2015),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Uuid"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3669), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3669)
);
}

/* Name - ns=1;i=3668 */

static UA_StatusCode function_nodeset_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      See DeviceType.tex. The primary container element for each piece of\\n      equipment. device is organized within the devices container.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3668),
UA_NODEID_NUMERIC(ns[1], 2015),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3668), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3668)
);
}

/* Description - ns=1;i=2028 */

static UA_StatusCode function_nodeset_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Description");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2028),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Description"),
UA_NODEID_NUMERIC(ns[1], 2053),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2028), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2028)
);
}

/* SerialNumber - ns=1;i=2738 */

static UA_StatusCode function_nodeset_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2738),
UA_NODEID_NUMERIC(ns[1], 2028),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2738), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2738)
);
}

/* Manufacturer - ns=1;i=2739 */

static UA_StatusCode function_nodeset_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2739),
UA_NODEID_NUMERIC(ns[1], 2028),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2739), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2739)
);
}

/* Station - ns=1;i=2737 */

static UA_StatusCode function_nodeset_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Station");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2737),
UA_NODEID_NUMERIC(ns[1], 2028),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Station"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2737), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2737)
);
}

/* Data - ns=1;i=2740 */

static UA_StatusCode function_nodeset_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Data");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Component Description. See the DescriptionType in the\\n      type-specifications. An XML element that can contain any descriptive\\n      content.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2740),
UA_NODEID_NUMERIC(ns[1], 2028),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Data"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2740), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2740)
);
}

/* MTMessageEventType - ns=1;i=2656 */

static UA_StatusCode function_nodeset_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTMessageEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2656),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTMessageEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2656)
);
}

/* NativeCode - ns=1;i=2657 */

static UA_StatusCode function_nodeset_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NativeCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2657),
UA_NODEID_NUMERIC(ns[1], 2656),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NativeCode"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2657), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2657)
);
}

/* MTStringEventType - ns=1;i=2433 */

static UA_StatusCode function_nodeset_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTStringEventType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      All data items with \\gls{category} \\uamodel{EVENT} where the data is\\n      freeform text. The data type will be set to String for all the sub-types.\\n      All extended type, regardless of controlled vocabularies, will use this\\n      base type unless proprietary enumerations are added to the nodeset as\\n      required by the builtin state event types inherited from\\n      \\mtmodel{MTControlledVocabEventType} (see\\n      \\ref{type:MTControlledVocabEventType}).\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTStringEventType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2433)
);
}

/* Representation - ns=1;i=2874 */

static UA_StatusCode function_nodeset_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2633);
attr.displayName = UA_LOCALIZEDTEXT("", "Representation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2874),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Representation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2874), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2874)
);
}

/* PeriodFilter - ns=1;i=2875 */

static UA_StatusCode function_nodeset_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "PeriodFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2875),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "PeriodFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2875), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2875)
);
}

/* XmlId - ns=1;i=2867 */

static UA_StatusCode function_nodeset_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2867),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2867), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2867)
);
}

/* MTSubTypeName - ns=1;i=2871 */

static UA_StatusCode function_nodeset_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2871),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2871), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2871)
);
}

/* MTTypeName - ns=1;i=2870 */

static UA_StatusCode function_nodeset_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2870),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2870), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2870)
);
}

/* SampleRate - ns=1;i=2873 */

static UA_StatusCode function_nodeset_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2873),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2873), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2873)
);
}

/* SourceData - ns=1;i=2872 */

static UA_StatusCode function_nodeset_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2872),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SourceData"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2872), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2872)
);
}

/* Name - ns=1;i=2868 */

static UA_StatusCode function_nodeset_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2868),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2868), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2868)
);
}

/* Category - ns=1;i=2869 */

static UA_StatusCode function_nodeset_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2634);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2869),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2869), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2869)
);
}

/* MTConfigurationType - ns=1;i=2044 */

static UA_StatusCode function_nodeset_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTConfigurationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The abstract \\mtuatype{MTConfigurationType} currently has only one\\n      sub-type, \\\\ \\mtuatype{MTSensorConfigurationType}. In the future, the\\n      configurations will also contain component and device configuration\\n      information as sub-types. An XML element that contains technical\\n      information about a piece of equipment describing its physical layout or\\n      functional characteristics.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2044),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTConfigurationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2044)
);
}

/* MTSensorConfigurationType - ns=1;i=2046 */

static UA_StatusCode function_nodeset_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTSensorConfigurationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Sensor Configuration associated with the Component. See\\n      SensorConfigurationType in type-specifications. An element that can\\n      contain descriptive content defining the configuration information for\\n      sensor.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2046),
UA_NODEID_NUMERIC(ns[1], 2044),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTSensorConfigurationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2046)
);
}

/* CalibrationDate - ns=1;i=2048 */

static UA_StatusCode function_nodeset_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "CalibrationDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Sensor Configuration associated with the Component. See\\n      SensorConfigurationType in type-specifications. An element that can\\n      contain descriptive content defining the configuration information for\\n      sensor.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2048),
UA_NODEID_NUMERIC(ns[1], 2046),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "CalibrationDate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2048), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2048)
);
}

/* NextCalibrationDate - ns=1;i=2049 */

static UA_StatusCode function_nodeset_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "NextCalibrationDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Sensor Configuration associated with the Component. See\\n      SensorConfigurationType in type-specifications. An element that can\\n      contain descriptive content defining the configuration information for\\n      sensor.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2049),
UA_NODEID_NUMERIC(ns[1], 2046),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NextCalibrationDate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2049), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2049)
);
}

/* FirwareVersion - ns=1;i=2047 */

static UA_StatusCode function_nodeset_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FirwareVersion");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Sensor Configuration associated with the Component. See\\n      SensorConfigurationType in type-specifications. An element that can\\n      contain descriptive content defining the configuration information for\\n      sensor.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2047),
UA_NODEID_NUMERIC(ns[1], 2046),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FirwareVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2047), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2047)
);
}

/* CalibrationInitials - ns=1;i=2050 */

static UA_StatusCode function_nodeset_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "CalibrationInitials");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Sensor Configuration associated with the Component. See\\n      SensorConfigurationType in type-specifications. An element that can\\n      contain descriptive content defining the configuration information for\\n      sensor.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2050),
UA_NODEID_NUMERIC(ns[1], 2046),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "CalibrationInitials"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2050), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2050)
);
}

/* Channels - ns=1;i=2052 */

static UA_StatusCode function_nodeset_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Channels");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An MTConnect Sensor Configuration associated with the Component. See\\n      SensorConfigurationType in type-specifications. An element that can\\n      contain descriptive content defining the configuration information for\\n      sensor.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2052),
UA_NODEID_NUMERIC(ns[1], 2046),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Channels"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2052), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2052)
);
}

/* Configuration - ns=1;i=2029 */

static UA_StatusCode function_nodeset_251_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Configuration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base \\gls{MTComponent} Type from which all MTConnect Components are\\n      derived. The component types will be created once for all\\n      \\gls{MTComponent} \\glspl{Object} of that type based on the \\gls{QName} of\\n      the MTConnect XML element. The Component Objects will be created and\\n      inserted into the \\mtmodel{Components} folder with a \\gls{BrowseName} of\\n      the Component \\gls{QName} and the \\mtmodel{name} element if specified\\n      surrounded by squar" "e brackets, \\texttt{[]}. For example if the MTConnect\\n      Element is: \\xml{<Linear name='X'>...</...>} The OPC\\n      UA Object with \\gls{BrowseName} \\xml{Linear[X]} will be created with the\\n      \\uamodel{HasTypeDefinition} referencing the \\mtmodel{Linear} OPC UA\\n      \\gls{Type}. The meta data for the component and its relationships are\\n      static. The dynamic data will be represented using the \\cite{UAPart8}. An\\n      abstract XML element. Replaced in the XML document b" "y types of component\\n      elements representing physical parts and logical functions of a piece of\\n      equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2029),
UA_NODEID_NUMERIC(ns[1], 2021),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Configuration"),
UA_NODEID_NUMERIC(ns[1], 2044),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2029), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2029)
);
}

/* MTThreeSpaceSampleType - ns=1;i=2641 */

static UA_StatusCode function_nodeset_252_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2637);
attr.displayName = UA_LOCALIZEDTEXT("", "MTThreeSpaceSampleType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special data item type that represents a three space coordinate. It uses\\n      a data type with three fields, X, Y, and Z, where the coordinates are\\n      given in millimeters. The EngineeringUnits will always be set to MMT in\\n      the UNECE convetion.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 2365),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTThreeSpaceSampleType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2641)
);
}

/* EngineeringUnits - ns=1;i=2642 */

static UA_StatusCode function_nodeset_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special data item type that represents a three space coordinate. It uses\\n      a data type with three fields, X, Y, and Z, where the coordinates are\\n      given in millimeters. The EngineeringUnits will always be set to MMT in\\n      the UNECE convetion.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2642),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2642), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2642)
);
}

/* Duration - ns=1;i=3673 */

static UA_StatusCode function_nodeset_254_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290);
attr.displayName = UA_LOCALIZEDTEXT("", "Duration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3673),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Duration"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3673), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3673)
);
}

/* CoordinateSystem - ns=1;i=2898 */

static UA_StatusCode function_nodeset_255_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2635);
attr.displayName = UA_LOCALIZEDTEXT("", "CoordinateSystem");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2898),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "CoordinateSystem"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2898), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2898)
);
}

/* InitialValue - ns=1;i=2899 */

static UA_StatusCode function_nodeset_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "InitialValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2899),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InitialValue"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2899), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2899)
);
}

/* MinimumDeltaFilter - ns=1;i=2902 */

static UA_StatusCode function_nodeset_257_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "MinimumDeltaFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2902),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MinimumDeltaFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2902), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2902)
);
}

/* SignificantDigits - ns=1;i=2895 */

static UA_StatusCode function_nodeset_258_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
attr.displayName = UA_LOCALIZEDTEXT("", "SignificantDigits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2895),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SignificantDigits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2895), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2895)
);
}

/* Statistic - ns=1;i=2896 */

static UA_StatusCode function_nodeset_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2659);
attr.displayName = UA_LOCALIZEDTEXT("", "Statistic");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2896),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Statistic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2896), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2896)
);
}

/* NativeUnits - ns=1;i=2897 */

static UA_StatusCode function_nodeset_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NativeUnits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2897),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NativeUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2897), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2897)
);
}

/* ResetTrigger - ns=1;i=2900 */

static UA_StatusCode function_nodeset_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2636);
attr.displayName = UA_LOCALIZEDTEXT("", "ResetTrigger");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2900),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ResetTrigger"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2900), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2900)
);
}

/* Units - ns=1;i=2901 */

static UA_StatusCode function_nodeset_262_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Units");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2901),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Units"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2901), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2901)
);
}

/* PeriodFilter - ns=1;i=2889 */

static UA_StatusCode function_nodeset_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "PeriodFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2889),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "PeriodFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2889), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2889)
);
}

/* Representation - ns=1;i=2888 */

static UA_StatusCode function_nodeset_264_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2633);
attr.displayName = UA_LOCALIZEDTEXT("", "Representation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2888),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Representation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2888), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2888)
);
}

/* Category - ns=1;i=2883 */

static UA_StatusCode function_nodeset_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2634);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2883),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2883), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2883)
);
}

/* Name - ns=1;i=2882 */

static UA_StatusCode function_nodeset_266_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2882),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2882), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2882)
);
}

/* XmlId - ns=1;i=2881 */

static UA_StatusCode function_nodeset_267_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2881),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2881), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2881)
);
}

/* SampleRate - ns=1;i=2887 */

static UA_StatusCode function_nodeset_268_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2887),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2887), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_268_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2887)
);
}

/* SourceData - ns=1;i=2886 */

static UA_StatusCode function_nodeset_269_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2886),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SourceData"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2886), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_269_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2886)
);
}

/* MTSubTypeName - ns=1;i=2885 */

static UA_StatusCode function_nodeset_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2885),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2885), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2885)
);
}

/* MTTypeName - ns=1;i=2884 */

static UA_StatusCode function_nodeset_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2884),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2884), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2884)
);
}

/* ResetTriggeredReason - ns=1;i=3677 */

static UA_StatusCode function_nodeset_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2636);
attr.displayName = UA_LOCALIZEDTEXT("", "ResetTriggeredReason");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3677),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ResetTriggeredReason"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3677), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3677)
);
}

/* Opc.Ua.MTConnect - ns=1;i=2729 */
static const UA_Byte variablenode_ns_1_i_2729_variant_DataContents_byteArray[9751] = {60, 63, 120, 109, 108, 32, 118, 101, 114, 115, 105, 111, 110, 61, 39, 49, 46, 48, 39, 32, 101, 110, 99, 111, 100, 105, 110, 103, 61, 39, 85, 84, 70, 45, 56, 39, 63, 62, 10, 60, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 32, 68, 101, 102, 97, 117, 108, 116, 66, 121, 116, 101, 79, 114, 100, 101, 114, 61, 39, 76, 105, 116, 116, 108, 101, 69, 110, 100, 105, 97, 110, 39, 32, 84, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 77, 84, 67, 111, 110, 110, 101, 99, 116, 47, 118, 50, 47, 39, 32, 120, 109, 108, 110, 115, 58, 111, 112, 99, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 47, 39, 32, 120, 109, 108, 110, 115, 58, 120, 115, 105, 61, 39, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 45, 105, 110, 115, 116, 97, 110, 99, 101, 39, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 39, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 39, 62, 10, 32, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 39, 32, 76, 111, 99, 97, 116, 105, 111, 110, 61, 39, 79, 112, 99, 46, 85, 97, 46, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 46, 98, 115, 100, 39, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 69, 118, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 84, 104, 101, 32, 101, 110, 99, 111, 100, 105, 110, 103, 32, 102, 111, 114, 32, 65, 115, 115, 101, 116, 69, 118, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 60, 47, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 73, 100, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 84, 121, 112, 101, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 77, 84, 67, 97, 116, 101, 103, 111, 114, 121, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 69, 86, 69, 78, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 67, 79, 78, 68, 73, 84, 73, 79, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 65, 77, 80, 76, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 77, 84, 67, 111, 111, 114, 100, 105, 110, 97, 116, 101, 83, 121, 115, 116, 101, 109, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 67, 72, 73, 78, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 87, 79, 82, 75, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 77, 84, 82, 101, 112, 114, 101, 115, 101, 110, 116, 97, 116, 105, 111, 110, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 68, 73, 83, 67, 82, 69, 84, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 84, 73, 77, 69, 95, 83, 69, 82, 73, 69, 83, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 86, 65, 76, 85, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 77, 84, 82, 101, 115, 101, 116, 84, 114, 105, 103, 103, 101, 114, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 67, 84, 73, 79, 78, 95, 67, 79, 77, 80, 76, 69, 84, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 78, 78, 85, 65, 76, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 68, 65, 89, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 73, 78, 84, 69, 78, 65, 78, 67, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 78, 85, 65, 76, 39, 32, 86, 97, 108, 117, 101, 61, 39, 52, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 79, 78, 84, 72, 39, 32, 86, 97, 108, 117, 101, 61, 39, 53, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 80, 79, 87, 69, 82, 95, 79, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 54, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 72, 73, 70, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 55, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 87, 69, 69, 75, 39, 32, 86, 97, 108, 117, 101, 61, 39, 56, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 77, 84, 83, 116, 97, 116, 105, 115, 116, 105, 99, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 86, 69, 82, 65, 71, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 88, 73, 77, 85, 77, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 69, 68, 73, 65, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 73, 78, 73, 77, 85, 77, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 79, 68, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 52, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 82, 65, 78, 71, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 53, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 82, 79, 79, 84, 95, 77, 69, 65, 78, 95, 83, 81, 85, 65, 82, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 54, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 84, 65, 78, 68, 65, 82, 68, 95, 68, 69, 86, 73, 65, 84, 73, 79, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 55, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 77, 101, 115, 115, 97, 103, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 84, 104, 101, 32, 101, 110, 99, 111, 100, 105, 110, 103, 32, 102, 111, 114, 32, 77, 101, 115, 115, 97, 103, 101, 68, 97, 116, 97, 84, 121, 112, 101, 60, 47, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 78, 97, 116, 105, 118, 101, 67, 111, 100, 101, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 84, 101, 120, 116, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 84, 104, 114, 101, 101, 83, 112, 97, 99, 101, 83, 97, 109, 112, 108, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 84, 104, 101, 32, 101, 110, 99, 111, 100, 105, 110, 103, 32, 102, 111, 114, 32, 84, 104, 114, 101, 101, 83, 112, 97, 99, 101, 83, 97, 109, 112, 108, 101, 68, 97, 116, 97, 84, 121, 112, 101, 60, 47, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 88, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 89, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 90, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 77, 84, 83, 101, 118, 101, 114, 105, 116, 121, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 70, 65, 85, 76, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 78, 79, 82, 77, 65, 76, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 87, 65, 82, 78, 73, 78, 71, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 81, 117, 97, 108, 105, 102, 105, 101, 114, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 72, 73, 71, 72, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 76, 79, 87, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 65, 99, 116, 105, 118, 101, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 73, 78, 65, 67, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 65, 118, 97, 105, 108, 97, 98, 105, 108, 105, 116, 121, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 86, 65, 73, 76, 65, 66, 76, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 85, 78, 65, 86, 65, 73, 76, 65, 66, 76, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 65, 120, 105, 115, 67, 111, 117, 112, 108, 105, 110, 103, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 83, 84, 69, 82, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 76, 65, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 89, 78, 67, 72, 82, 79, 78, 79, 85, 83, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 84, 65, 78, 68, 69, 77, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 65, 120, 105, 115, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 72, 79, 77, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 80, 65, 82, 75, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 84, 79, 80, 80, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 84, 82, 65, 86, 69, 76, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 67, 111, 109, 112, 111, 115, 105, 116, 105, 111, 110, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 67, 76, 79, 83, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 68, 79, 87, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 73, 78, 65, 67, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 76, 69, 70, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 52, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 79, 70, 70, 39, 32, 86, 97, 108, 117, 101, 61, 39, 53, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 79, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 54, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 79, 80, 69, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 55, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 82, 73, 71, 72, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 56, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 84, 82, 65, 78, 83, 73, 84, 73, 79, 78, 73, 78, 71, 39, 32, 86, 97, 108, 117, 101, 61, 39, 57, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 85, 78, 76, 65, 84, 67, 72, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 85, 80, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 67, 111, 110, 116, 114, 111, 108, 108, 101, 114, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 85, 84, 79, 77, 65, 84, 73, 67, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 69, 68, 73, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 78, 85, 65, 76, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 78, 85, 65, 76, 95, 68, 65, 84, 65, 95, 73, 78, 80, 85, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 69, 77, 73, 95, 65, 85, 84, 79, 77, 65, 84, 73, 67, 39, 32, 86, 97, 108, 117, 101, 61, 39, 52, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 68, 105, 114, 101, 99, 116, 105, 111, 110, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 67, 76, 79, 67, 75, 87, 73, 83, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 67, 79, 85, 78, 84, 69, 82, 95, 67, 76, 79, 67, 75, 87, 73, 83, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 78, 69, 71, 65, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 80, 79, 83, 73, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 69, 109, 101, 114, 103, 101, 110, 99, 121, 83, 116, 111, 112, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 82, 77, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 84, 82, 73, 71, 71, 69, 82, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 69, 120, 101, 99, 117, 116, 105, 111, 110, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 70, 69, 69, 68, 95, 72, 79, 76, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 73, 78, 84, 69, 82, 82, 85, 80, 84, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 79, 80, 84, 73, 79, 78, 65, 76, 95, 83, 84, 79, 80, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 82, 69, 65, 68, 89, 39, 32, 86, 97, 108, 117, 101, 61, 39, 52, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 80, 82, 79, 71, 82, 65, 77, 95, 67, 79, 77, 80, 76, 69, 84, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 53, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 80, 82, 79, 71, 82, 65, 77, 95, 83, 84, 79, 80, 80, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 54, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 84, 79, 80, 80, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 55, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 70, 117, 110, 99, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 73, 78, 84, 69, 78, 65, 78, 67, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 80, 82, 79, 68, 85, 67, 84, 73, 79, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 80, 82, 79, 67, 69, 83, 83, 95, 68, 69, 86, 69, 76, 79, 80, 77, 69, 78, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 69, 84, 85, 80, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 84, 69, 65, 82, 68, 79, 87, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 52, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 73, 110, 116, 101, 114, 102, 97, 99, 101, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 67, 79, 77, 80, 76, 69, 84, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 70, 65, 73, 76, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 78, 79, 84, 95, 82, 69, 65, 68, 89, 39, 32, 86, 97, 108, 117, 101, 61, 39, 52, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 82, 69, 65, 68, 89, 39, 32, 86, 97, 108, 117, 101, 61, 39, 53, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 73, 110, 116, 101, 114, 102, 97, 99, 101, 83, 116, 97, 116, 117, 115, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 68, 73, 83, 65, 66, 76, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 69, 78, 65, 66, 76, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 79, 110, 79, 102, 102, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 79, 70, 70, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 79, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 79, 112, 101, 110, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 67, 76, 79, 83, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 79, 80, 69, 78, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 85, 78, 76, 65, 84, 67, 72, 69, 68, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 80, 97, 116, 104, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 73, 78, 68, 69, 80, 69, 78, 68, 69, 78, 84, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 65, 83, 84, 69, 82, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 77, 73, 82, 82, 79, 82, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 89, 78, 67, 72, 82, 79, 78, 79, 85, 83, 39, 32, 86, 97, 108, 117, 101, 61, 39, 51, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 80, 114, 111, 103, 114, 97, 109, 69, 100, 105, 116, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 78, 79, 84, 95, 82, 69, 65, 68, 89, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 82, 69, 65, 68, 89, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 82, 111, 116, 97, 114, 121, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 67, 79, 78, 84, 79, 85, 82, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 73, 78, 68, 69, 88, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 83, 80, 73, 78, 68, 76, 69, 39, 32, 86, 97, 108, 117, 101, 61, 39, 50, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 89, 101, 115, 78, 111, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 39, 51, 50, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 78, 79, 39, 32, 86, 97, 108, 117, 101, 61, 39, 48, 39, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 39, 89, 69, 83, 39, 32, 86, 97, 108, 117, 101, 61, 39, 49, 39, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 10, 60, 47, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 62};



static UA_StatusCode function_nodeset_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_2729_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_2729_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_2729_variant_DataContents);
variablenode_ns_1_i_2729_variant_DataContents->length = 9751;
variablenode_ns_1_i_2729_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_2729_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2729_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.MTConnect");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2729),
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Opc.Ua.MTConnect"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_2729_variant_DataContents->data = NULL;
variablenode_ns_1_i_2729_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_2729_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2729)
);
}

/* ThreeSpaceSampleDataType - ns=1;i=2910 */

static UA_StatusCode function_nodeset_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2910_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2910_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2910_variant_DataContents);
*variablenode_ns_1_i_2910_variant_DataContents = UA_STRING_ALLOC("ThreeSpaceSampleDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2910_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ThreeSpaceSampleDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents a position in a three space coordinate system. The positions\\n      must be given in millimeters.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2910),
UA_NODEID_NUMERIC(ns[1], 2729),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ThreeSpaceSampleDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2910_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2910), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2909), false);
return retVal;
}

static UA_StatusCode function_nodeset_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2910)
);
}

/* DictionaryFragment - ns=1;i=2911 */
static const UA_Byte variablenode_ns_1_i_2911_variant_DataContents_byteArray[325] = {60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 84, 104, 114, 101, 101, 83, 112, 97, 99, 101, 83, 97, 109, 112, 108, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 60, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 84, 104, 101, 32, 101, 110, 99, 111, 100, 105, 110, 103, 32, 102, 111, 114, 32, 84, 104, 114, 101, 101, 83, 112, 97, 99, 101, 83, 97, 109, 112, 108, 101, 68, 97, 116, 97, 84, 121, 112, 101, 60, 47, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 88, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 39, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 89, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 39, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 90, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 39, 47, 62, 10, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62};



static UA_StatusCode function_nodeset_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_2911_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_2911_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_2911_variant_DataContents);
variablenode_ns_1_i_2911_variant_DataContents->length = 325;
variablenode_ns_1_i_2911_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_2911_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2911_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryFragment");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents a position in a three space coordinate system. The positions\\n      must be given in millimeters.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2911),
UA_NODEID_NUMERIC(ns[1], 2910),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DictionaryFragment"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_2911_variant_DataContents->data = NULL;
variablenode_ns_1_i_2911_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_2911_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2911)
);
}

/* MessageDataType - ns=1;i=2904 */

static UA_StatusCode function_nodeset_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2904_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2904_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2904_variant_DataContents);
*variablenode_ns_1_i_2904_variant_DataContents = UA_STRING_ALLOC("MessageDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2904_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MessageDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2904),
UA_NODEID_NUMERIC(ns[1], 2729),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MessageDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2904_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2904), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2903), false);
return retVal;
}

static UA_StatusCode function_nodeset_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2904)
);
}

/* DictionaryFragment - ns=1;i=2905 */
static const UA_Byte variablenode_ns_1_i_2905_variant_DataContents_byteArray[273] = {60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 77, 101, 115, 115, 97, 103, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 60, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 84, 104, 101, 32, 101, 110, 99, 111, 100, 105, 110, 103, 32, 102, 111, 114, 32, 77, 101, 115, 115, 97, 103, 101, 68, 97, 116, 97, 84, 121, 112, 101, 60, 47, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 78, 97, 116, 105, 118, 101, 67, 111, 100, 101, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 39, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 84, 101, 120, 116, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 39, 47, 62, 10, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62};



static UA_StatusCode function_nodeset_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_2905_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_2905_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_2905_variant_DataContents);
variablenode_ns_1_i_2905_variant_DataContents->length = 273;
variablenode_ns_1_i_2905_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_2905_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2905_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryFragment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2905),
UA_NODEID_NUMERIC(ns[1], 2904),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DictionaryFragment"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_2905_variant_DataContents->data = NULL;
variablenode_ns_1_i_2905_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_2905_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2905)
);
}

/* NamespaceUri - ns=1;i=2731 */

static UA_StatusCode function_nodeset_278_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2731_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2731_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2731_variant_DataContents);
*variablenode_ns_1_i_2731_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/MTConnect/v2/");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2731_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2731),
UA_NODEID_NUMERIC(ns[1], 2729),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2731_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2731)
);
}

/* Deprecated - ns=1;i=2732 */

static UA_StatusCode function_nodeset_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_2732_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_2732_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_2732_variant_DataContents);
*variablenode_ns_1_i_2732_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2732_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Deprecated");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2732),
UA_NODEID_NUMERIC(ns[1], 2729),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Deprecated"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_2732_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2732)
);
}

/* AssetEventDataType - ns=1;i=2746 */

static UA_StatusCode function_nodeset_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2746_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2746_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2746_variant_DataContents);
*variablenode_ns_1_i_2746_variant_DataContents = UA_STRING_ALLOC("AssetEventDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2746_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "AssetEventDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special \\gls{Variable} data type for asset change with a\\n      \\mtmodel{AssetType} and \\mtmodel{AssetId}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2746),
UA_NODEID_NUMERIC(ns[1], 2729),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AssetEventDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2746_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2746), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2745), false);
return retVal;
}

static UA_StatusCode function_nodeset_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2746)
);
}

/* DictionaryFragment - ns=1;i=2747 */
static const UA_Byte variablenode_ns_1_i_2747_variant_DataContents_byteArray[281] = {60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 69, 118, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 39, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 39, 62, 10, 32, 32, 60, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 84, 104, 101, 32, 101, 110, 99, 111, 100, 105, 110, 103, 32, 102, 111, 114, 32, 65, 115, 115, 101, 116, 69, 118, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 60, 47, 111, 112, 99, 58, 68, 111, 99, 117, 109, 101, 110, 116, 97, 116, 105, 111, 110, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 73, 100, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 39, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 84, 121, 112, 101, 39, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 39, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 39, 47, 62, 10, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62};



static UA_StatusCode function_nodeset_281_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_2747_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_2747_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_2747_variant_DataContents);
variablenode_ns_1_i_2747_variant_DataContents->length = 281;
variablenode_ns_1_i_2747_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_2747_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2747_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryFragment");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special \\gls{Variable} data type for asset change with a\\n      \\mtmodel{AssetType} and \\mtmodel{AssetId}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2747),
UA_NODEID_NUMERIC(ns[1], 2746),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DictionaryFragment"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_2747_variant_DataContents->data = NULL;
variablenode_ns_1_i_2747_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_2747_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2747)
);
}

/* MTConstraintType - ns=1;i=2647 */

static UA_StatusCode function_nodeset_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTConstraintType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2647),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTConstraintType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2647)
);
}

/* Constraints - ns=1;i=2760 */

static UA_StatusCode function_nodeset_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Constraints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2760),
UA_NODEID_NUMERIC(ns[1], 2621),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Constraints"),
UA_NODEID_NUMERIC(ns[1], 2647),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2760), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2760)
);
}

/* Values - ns=1;i=2761 */

static UA_StatusCode function_nodeset_284_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2761),
UA_NODEID_NUMERIC(ns[1], 2760),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2761), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2761)
);
}

/* Minimum - ns=1;i=2762 */

static UA_StatusCode function_nodeset_285_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2762),
UA_NODEID_NUMERIC(ns[1], 2760),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2762), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2762)
);
}

/* Maximum - ns=1;i=2763 */

static UA_StatusCode function_nodeset_286_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2763),
UA_NODEID_NUMERIC(ns[1], 2760),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2763), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2763)
);
}

/* Nominal - ns=1;i=2764 */

static UA_StatusCode function_nodeset_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2764),
UA_NODEID_NUMERIC(ns[1], 2760),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2764), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2764)
);
}

/* Constraints - ns=1;i=2876 */

static UA_StatusCode function_nodeset_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Constraints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2876),
UA_NODEID_NUMERIC(ns[1], 2433),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Constraints"),
UA_NODEID_NUMERIC(ns[1], 2647),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2876), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2876)
);
}

/* Values - ns=1;i=2877 */

static UA_StatusCode function_nodeset_289_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2877),
UA_NODEID_NUMERIC(ns[1], 2876),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2877), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2877)
);
}

/* Minimum - ns=1;i=2878 */

static UA_StatusCode function_nodeset_290_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2878),
UA_NODEID_NUMERIC(ns[1], 2876),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2878), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2878)
);
}

/* Maximum - ns=1;i=2879 */

static UA_StatusCode function_nodeset_291_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2879),
UA_NODEID_NUMERIC(ns[1], 2876),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2879), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_291_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2879)
);
}

/* Nominal - ns=1;i=2880 */

static UA_StatusCode function_nodeset_292_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2880),
UA_NODEID_NUMERIC(ns[1], 2876),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2880), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_292_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2880)
);
}

/* Maximum - ns=1;i=2650 */

static UA_StatusCode function_nodeset_293_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2650),
UA_NODEID_NUMERIC(ns[1], 2647),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2650), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2650)
);
}

/* Nominal - ns=1;i=2651 */

static UA_StatusCode function_nodeset_294_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2651),
UA_NODEID_NUMERIC(ns[1], 2647),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2651), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_294_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2651)
);
}

/* Constraints - ns=1;i=2890 */

static UA_StatusCode function_nodeset_295_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Constraints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2890),
UA_NODEID_NUMERIC(ns[1], 2641),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Constraints"),
UA_NODEID_NUMERIC(ns[1], 2647),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2890), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_295_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2890)
);
}

/* Values - ns=1;i=2891 */

static UA_StatusCode function_nodeset_296_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2891),
UA_NODEID_NUMERIC(ns[1], 2890),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2891), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_296_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2891)
);
}

/* Minimum - ns=1;i=2892 */

static UA_StatusCode function_nodeset_297_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2892),
UA_NODEID_NUMERIC(ns[1], 2890),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2892), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_297_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2892)
);
}

/* Maximum - ns=1;i=2893 */

static UA_StatusCode function_nodeset_298_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2893),
UA_NODEID_NUMERIC(ns[1], 2890),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2893), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_298_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2893)
);
}

/* Nominal - ns=1;i=2894 */

static UA_StatusCode function_nodeset_299_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2894),
UA_NODEID_NUMERIC(ns[1], 2890),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2894), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_299_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2894)
);
}

/* Minimum - ns=1;i=2649 */

static UA_StatusCode function_nodeset_300_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2649),
UA_NODEID_NUMERIC(ns[1], 2647),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2649), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_300_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2649)
);
}

/* Values - ns=1;i=2648 */

static UA_StatusCode function_nodeset_301_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2648),
UA_NODEID_NUMERIC(ns[1], 2647),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2648), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_301_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2648)
);
}

/* Constraints - ns=1;i=2780 */

static UA_StatusCode function_nodeset_302_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Constraints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2780),
UA_NODEID_NUMERIC(ns[1], 2626),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Constraints"),
UA_NODEID_NUMERIC(ns[1], 2647),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2780), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_302_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2780)
);
}

/* Values - ns=1;i=2781 */

static UA_StatusCode function_nodeset_303_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2781),
UA_NODEID_NUMERIC(ns[1], 2780),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2781), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_303_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2781)
);
}

/* Minimum - ns=1;i=2782 */

static UA_StatusCode function_nodeset_304_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2782),
UA_NODEID_NUMERIC(ns[1], 2780),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2782), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_304_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2782)
);
}

/* Maximum - ns=1;i=2783 */

static UA_StatusCode function_nodeset_305_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2783),
UA_NODEID_NUMERIC(ns[1], 2780),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2783), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_305_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2783)
);
}

/* Nominal - ns=1;i=2784 */

static UA_StatusCode function_nodeset_306_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2784),
UA_NODEID_NUMERIC(ns[1], 2780),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2784), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_306_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2784)
);
}

/* MTNumericEventType - ns=1;i=2438 */

static UA_StatusCode function_nodeset_307_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26);
attr.displayName = UA_LOCALIZEDTEXT("", "MTNumericEventType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      All data items with category \\gls{MTEvent} and a numeric value. These are\\n      usually counters for parts and lines. Currently only builtin types that\\n      are known to be integers will be sub-typed from this type. Extended types\\n      will be subtyped from the \\mtuatype{MTStringEventType}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 2365),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTNumericEventType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_307_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2438)
);
}

/* SourceData - ns=1;i=2810 */

static UA_StatusCode function_nodeset_308_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2810),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SourceData"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2810), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_308_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2810)
);
}

/* InitialValue - ns=1;i=2823 */

static UA_StatusCode function_nodeset_309_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "InitialValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2823),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InitialValue"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2823), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_309_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2823)
);
}

/* SampleRate - ns=1;i=2811 */

static UA_StatusCode function_nodeset_310_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2811),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2811), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_310_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2811)
);
}

/* NativeUnits - ns=1;i=2821 */

static UA_StatusCode function_nodeset_311_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NativeUnits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2821),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NativeUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2821), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_311_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2821)
);
}

/* MTTypeName - ns=1;i=2808 */

static UA_StatusCode function_nodeset_312_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2808),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2808), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_312_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2808)
);
}

/* ResetTriggeredReason - ns=1;i=3675 */

static UA_StatusCode function_nodeset_313_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2636);
attr.displayName = UA_LOCALIZEDTEXT("", "ResetTriggeredReason");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3675),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ResetTriggeredReason"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3675), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_313_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3675)
);
}

/* Constraints - ns=1;i=2814 */

static UA_StatusCode function_nodeset_314_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Constraints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2814),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Constraints"),
UA_NODEID_NUMERIC(ns[1], 2647),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2814), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_314_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2814)
);
}

/* Nominal - ns=1;i=2818 */

static UA_StatusCode function_nodeset_315_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2818),
UA_NODEID_NUMERIC(ns[1], 2814),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2818), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_315_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2818)
);
}

/* Values - ns=1;i=2815 */

static UA_StatusCode function_nodeset_316_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2815),
UA_NODEID_NUMERIC(ns[1], 2814),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2815), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_316_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2815)
);
}

/* Minimum - ns=1;i=2816 */

static UA_StatusCode function_nodeset_317_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2816),
UA_NODEID_NUMERIC(ns[1], 2814),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2816), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_317_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2816)
);
}

/* Maximum - ns=1;i=2817 */

static UA_StatusCode function_nodeset_318_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2817),
UA_NODEID_NUMERIC(ns[1], 2814),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2817), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_318_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2817)
);
}

/* MTSubTypeName - ns=1;i=2809 */

static UA_StatusCode function_nodeset_319_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2809),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2809), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_319_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2809)
);
}

/* Statistic - ns=1;i=2820 */

static UA_StatusCode function_nodeset_320_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2659);
attr.displayName = UA_LOCALIZEDTEXT("", "Statistic");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2820),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Statistic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2820), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_320_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2820)
);
}

/* SignificantDigits - ns=1;i=2819 */

static UA_StatusCode function_nodeset_321_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
attr.displayName = UA_LOCALIZEDTEXT("", "SignificantDigits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2819),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SignificantDigits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2819), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_321_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2819)
);
}

/* Representation - ns=1;i=2812 */

static UA_StatusCode function_nodeset_322_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2633);
attr.displayName = UA_LOCALIZEDTEXT("", "Representation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2812),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Representation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2812), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_322_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2812)
);
}

/* PeriodFilter - ns=1;i=2813 */

static UA_StatusCode function_nodeset_323_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "PeriodFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2813),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "PeriodFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2813), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_323_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2813)
);
}

/* Duration - ns=1;i=3671 */

static UA_StatusCode function_nodeset_324_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290);
attr.displayName = UA_LOCALIZEDTEXT("", "Duration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3671),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Duration"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3671), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_324_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3671)
);
}

/* MinimumDeltaFilter - ns=1;i=2826 */

static UA_StatusCode function_nodeset_325_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "MinimumDeltaFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2826),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MinimumDeltaFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2826), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_325_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2826)
);
}

/* Units - ns=1;i=2825 */

static UA_StatusCode function_nodeset_326_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Units");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2825),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Units"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2825), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_326_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2825)
);
}

/* ResetTrigger - ns=1;i=2824 */

static UA_StatusCode function_nodeset_327_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2636);
attr.displayName = UA_LOCALIZEDTEXT("", "ResetTrigger");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2824),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ResetTrigger"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2824), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_327_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2824)
);
}

/* XmlId - ns=1;i=2805 */

static UA_StatusCode function_nodeset_328_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2805),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2805), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_328_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2805)
);
}

/* CoordinateSystem - ns=1;i=2822 */

static UA_StatusCode function_nodeset_329_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2635);
attr.displayName = UA_LOCALIZEDTEXT("", "CoordinateSystem");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2822),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "CoordinateSystem"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2822), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_329_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2822)
);
}

/* Category - ns=1;i=2807 */

static UA_StatusCode function_nodeset_330_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2634);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2807),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2807), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_330_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2807)
);
}

/* Name - ns=1;i=2806 */

static UA_StatusCode function_nodeset_331_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2806),
UA_NODEID_NUMERIC(ns[1], 2438),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2806), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_331_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2806)
);
}

/* http://opcfoundation.org/UA/MTConnect/2.0/ - ns=1;i=3630 */

static UA_StatusCode function_nodeset_332_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://opcfoundation.org/UA/MTConnect/2.0/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3630),
UA_NODEID_NUMERIC(ns[0], 11715),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "http://opcfoundation.org/UA/MTConnect/2.0/"),
UA_NODEID_NUMERIC(ns[0], 11616),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_332_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3630)
);
}

/* StaticStringNodeIdPattern - ns=1;i=3638 */

static UA_StatusCode function_nodeset_333_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3638),
UA_NODEID_NUMERIC(ns[1], 3630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_333_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3638)
);
}

/* NamespaceUri - ns=1;i=3632 */

static UA_StatusCode function_nodeset_334_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3632_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3632_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3632_variant_DataContents);
*variablenode_ns_1_i_3632_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/MTConnect/2.0/");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3632_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3632),
UA_NODEID_NUMERIC(ns[1], 3630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3632_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_334_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3632)
);
}

/* NamespaceVersion - ns=1;i=3633 */

static UA_StatusCode function_nodeset_335_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3633_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3633_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3633_variant_DataContents);
*variablenode_ns_1_i_3633_variant_DataContents = UA_STRING_ALLOC("2.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3633_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3633),
UA_NODEID_NUMERIC(ns[1], 3630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3633_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_335_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3633)
);
}

/* StaticNodeIdTypes - ns=1;i=3636 */

static UA_StatusCode function_nodeset_336_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256);
UA_Int32 variablenode_ns_1_i_3636_variant_DataContents[1];
variablenode_ns_1_i_3636_variant_DataContents[0] = (UA_Int32) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3636_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3636),
UA_NODEID_NUMERIC(ns[1], 3630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_336_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3636)
);
}

/* StaticNumericNodeIdRange - ns=1;i=3637 */

static UA_StatusCode function_nodeset_337_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291);
UA_String variablenode_ns_1_i_3637_variant_DataContents[1];
variablenode_ns_1_i_3637_variant_DataContents[0] = UA_STRING("1:1073741824");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3637_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3637),
UA_NODEID_NUMERIC(ns[1], 3630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_337_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3637)
);
}

/* NamespacePublicationDate - ns=1;i=3634 */

static UA_StatusCode function_nodeset_338_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
UA_DateTime *variablenode_ns_1_i_3634_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_1_i_3634_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_1_i_3634_variant_DataContents);
*variablenode_ns_1_i_3634_variant_DataContents = ( (UA_DateTime)(1540944000000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3634_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3634),
UA_NODEID_NUMERIC(ns[1], 3630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_1_i_3634_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_338_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3634)
);
}

/* IsNamespaceSubset - ns=1;i=3635 */

static UA_StatusCode function_nodeset_339_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_3635_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_3635_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_3635_variant_DataContents);
*variablenode_ns_1_i_3635_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3635_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3635),
UA_NODEID_NUMERIC(ns[1], 3630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_3635_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_339_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3635)
);
}

/* MTMessageType - ns=1;i=2471 */

static UA_StatusCode function_nodeset_340_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2653);
attr.displayName = UA_LOCALIZEDTEXT("", "MTMessageType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The message is a sub-type of the \\uaterm{DataVariableType} using the\\n      \\mtuatype{MessageDataType} to represent the values for \\mtterm{NativeCode}\\n      and \\mtterm{Text} of the message from the \\gls{CDATA} of the MTConnect\\n      Streams message. Any text string of information to be transferred from a\\n      piece of equipment to a client software application.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTMessageType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_340_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2471)
);
}

/* Constraints - ns=1;i=2800 */

static UA_StatusCode function_nodeset_341_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Constraints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2800),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Constraints"),
UA_NODEID_NUMERIC(ns[1], 2647),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2800), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_341_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2800)
);
}

/* Nominal - ns=1;i=2804 */

static UA_StatusCode function_nodeset_342_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2804),
UA_NODEID_NUMERIC(ns[1], 2800),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2804), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_342_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2804)
);
}

/* Minimum - ns=1;i=2802 */

static UA_StatusCode function_nodeset_343_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2802),
UA_NODEID_NUMERIC(ns[1], 2800),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2802), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_343_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2802)
);
}

/* Maximum - ns=1;i=2803 */

static UA_StatusCode function_nodeset_344_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2803),
UA_NODEID_NUMERIC(ns[1], 2800),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2803), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_344_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2803)
);
}

/* Values - ns=1;i=2801 */

static UA_StatusCode function_nodeset_345_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2801),
UA_NODEID_NUMERIC(ns[1], 2800),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2801), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_345_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2801)
);
}

/* Representation - ns=1;i=2798 */

static UA_StatusCode function_nodeset_346_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2633);
attr.displayName = UA_LOCALIZEDTEXT("", "Representation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2798),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Representation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2798), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_346_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2798)
);
}

/* PeriodFilter - ns=1;i=2799 */

static UA_StatusCode function_nodeset_347_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "PeriodFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2799),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "PeriodFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2799), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_347_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2799)
);
}

/* SourceData - ns=1;i=2796 */

static UA_StatusCode function_nodeset_348_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2796),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SourceData"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2796), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_348_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2796)
);
}

/* SampleRate - ns=1;i=2797 */

static UA_StatusCode function_nodeset_349_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2797),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2797), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_349_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2797)
);
}

/* MTTypeName - ns=1;i=2794 */

static UA_StatusCode function_nodeset_350_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2794),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2794), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_350_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2794)
);
}

/* MTSubTypeName - ns=1;i=2795 */

static UA_StatusCode function_nodeset_351_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2795),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2795), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_351_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2795)
);
}

/* Name - ns=1;i=2792 */

static UA_StatusCode function_nodeset_352_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2792),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2792), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_352_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2792)
);
}

/* Category - ns=1;i=2793 */

static UA_StatusCode function_nodeset_353_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2634);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2793),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2793), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_353_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2793)
);
}

/* XmlId - ns=1;i=2791 */

static UA_StatusCode function_nodeset_354_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2791),
UA_NODEID_NUMERIC(ns[1], 2471),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2791), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_354_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2791)
);
}

/* MTConditionEventType - ns=1;i=4326 */

static UA_StatusCode function_nodeset_355_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTConditionEventType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 2782),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTConditionEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_355_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4326)
);
}

/* DataItemId - ns=1;i=4327 */

static UA_StatusCode function_nodeset_356_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "DataItemId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4327),
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DataItemId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4327), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_356_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4327)
);
}

/* ActiveState - ns=1;i=4336 */

static UA_StatusCode function_nodeset_357_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ActiveState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4336),
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ActiveState"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4336), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_357_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4336)
);
}

/* NativeCode - ns=1;i=4331 */

static UA_StatusCode function_nodeset_358_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NativeCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4331),
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NativeCode"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4331), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_358_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4331)
);
}

/* MTTypeName - ns=1;i=4330 */

static UA_StatusCode function_nodeset_359_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4330),
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4330), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_359_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4330)
);
}

/* Qualifier - ns=1;i=4333 */

static UA_StatusCode function_nodeset_360_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2668);
attr.displayName = UA_LOCALIZEDTEXT("", "Qualifier");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4333),
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Qualifier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4333), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_360_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4333)
);
}

/* NativeSeverity - ns=1;i=4332 */

static UA_StatusCode function_nodeset_361_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NativeSeverity");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4332),
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NativeSeverity"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4332), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_361_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4332)
);
}

/* MTSeverity - ns=1;i=4328 */

static UA_StatusCode function_nodeset_362_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2669);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSeverity");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4328),
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSeverity"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4328), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_362_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4328)
);
}

/* MTSubTypeName - ns=1;i=4329 */

static UA_StatusCode function_nodeset_363_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The condition type is a derived from the UA \\uamodel{ContitionType}. When\\n      the \\mtmodel{Warning} or \\mtmodel{Fault} state occurs, an\\n      \\mtuatype{MTConditionEventType} \\uamodel{Event} is created and with the\\n      \\mtmodel{ActiveState} set to \\uamodel{True} and \\uamodel{Retain} set to\\n      \\uamodel{True}. The severity is used to represent the MTConnect condition\\n      states of Warning and Fault with the values of 500 and 1000 respectively.\\n      A new \\ua" "model{NodeId} will be created for every unique instance of the\\n      MTConnect \\mtmodel{Condition} reported. When the \\mtmodel{Condition} goes\\n      back to Normal, the \\mtmodel{ActiveState} is set to \\uamodel{False} and\\n      \\uamodel{Retain} is also set to \\uamodel{False} with the \\uamodel{NodeId}\\n      of the associated \\mtmodel{Condition}. If multiple MTConnect\\n      \\mtmodel{Condition}s have been cleared at the same time, all currently\\n      active \\mtuatype{MTConditio" "nEventType} \\uamodel{Event}s will need to be\\n      created as inactive. The \\mtuatype{MTConditionEventType} must set the\\n      \\uamodel{BaseEvent} \\uamodel{SourceNode} to the related\\n      \\mtuatype{MTConditionType} that represents the meta-data for this\\n      Condition. The \\mtuatype{MTConditionEventType} will never be instantiated\\n      in the \\uaterm{AddressSpace} as an \\uamodel{Object}. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4329),
UA_NODEID_NUMERIC(ns[1], 4326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4329), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_363_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4329)
);
}

/* MTConditionType - ns=1;i=2660 */

static UA_StatusCode function_nodeset_364_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTConditionType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An \\mtmodel{MTConditionType} instance will be created for event MTConnect\\n      \\gls{MTDataItem} with a \\gls{category} of \\mtmodel{CONDITION}. The\\n      \\gls{BrowseName} of the condition uses the same naming convention as the\\n      MTConnect \\gls{MTDataItem} types with \\gls{MTCondition} appended as a\\n      suffix. For example the condition with \\gls{type} of \\mtmodel{TEMPERATURE}\\n      will have the browse name of \\mtmodel{TemperatureCondition} as opposed to\\n      " "the \\mtuatype{MTSampleType} of \\mtmodel{Temperature}. An XML element which\\n      provides the information and data reported from a piece of equipment for\\n      those dataitem elements defined with a category attribute of condition\\n      category in the mtconnectdevices document.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTConditionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_364_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2660)
);
}

/* SampleRate - ns=1;i=2921 */

static UA_StatusCode function_nodeset_365_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2921),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2921), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_365_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2921)
);
}

/* SourceData - ns=1;i=2920 */

static UA_StatusCode function_nodeset_366_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2920),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SourceData"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2920), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_366_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2920)
);
}

/* PeriodFilter - ns=1;i=2923 */

static UA_StatusCode function_nodeset_367_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "PeriodFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2923),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "PeriodFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2923), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_367_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2923)
);
}

/* Representation - ns=1;i=2922 */

static UA_StatusCode function_nodeset_368_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2633);
attr.displayName = UA_LOCALIZEDTEXT("", "Representation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2922),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Representation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2922), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_368_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2922)
);
}

/* Constraints - ns=1;i=2924 */

static UA_StatusCode function_nodeset_369_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Constraints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2924),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Constraints"),
UA_NODEID_NUMERIC(ns[1], 2647),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2924), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_369_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2924)
);
}

/* Values - ns=1;i=2925 */

static UA_StatusCode function_nodeset_370_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2925),
UA_NODEID_NUMERIC(ns[1], 2924),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2925), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_370_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2925)
);
}

/* Minimum - ns=1;i=2926 */

static UA_StatusCode function_nodeset_371_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2926),
UA_NODEID_NUMERIC(ns[1], 2924),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2926), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_371_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2926)
);
}

/* Maximum - ns=1;i=2927 */

static UA_StatusCode function_nodeset_372_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2927),
UA_NODEID_NUMERIC(ns[1], 2924),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2927), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_372_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2927)
);
}

/* Nominal - ns=1;i=2928 */

static UA_StatusCode function_nodeset_373_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2928),
UA_NODEID_NUMERIC(ns[1], 2924),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2928), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_373_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2928)
);
}

/* MTTypeName - ns=1;i=2918 */

static UA_StatusCode function_nodeset_374_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2918),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2918), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_374_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2918)
);
}

/* MTSubTypeName - ns=1;i=2919 */

static UA_StatusCode function_nodeset_375_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2919),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2919), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_375_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2919)
);
}

/* XmlId - ns=1;i=2915 */

static UA_StatusCode function_nodeset_376_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2915),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2915), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_376_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2915)
);
}

/* Name - ns=1;i=2916 */

static UA_StatusCode function_nodeset_377_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2916),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2916), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_377_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2916)
);
}

/* Category - ns=1;i=2917 */

static UA_StatusCode function_nodeset_378_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2634);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2917),
UA_NODEID_NUMERIC(ns[1], 2660),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2917), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_378_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2917)
);
}

/* Opc.Ua.MTConnect - ns=1;i=2733 */
static const UA_Byte variablenode_ns_1_i_2733_variant_DataContents_byteArray[10760] = {60, 63, 120, 109, 108, 32, 118, 101, 114, 115, 105, 111, 110, 61, 39, 49, 46, 48, 39, 32, 101, 110, 99, 111, 100, 105, 110, 103, 61, 39, 85, 84, 70, 45, 56, 39, 63, 62, 10, 60, 120, 115, 58, 115, 99, 104, 101, 109, 97, 32, 120, 109, 108, 110, 115, 58, 120, 115, 61, 39, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 39, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 39, 32, 120, 109, 108, 110, 115, 58, 109, 116, 99, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 77, 84, 67, 111, 110, 110, 101, 99, 116, 47, 118, 50, 47, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 39, 32, 116, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 77, 84, 67, 111, 110, 110, 101, 99, 116, 47, 118, 50, 47, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 39, 32, 101, 108, 101, 109, 101, 110, 116, 70, 111, 114, 109, 68, 101, 102, 97, 117, 108, 116, 61, 39, 113, 117, 97, 108, 105, 102, 105, 101, 100, 39, 62, 10, 32, 32, 60, 120, 115, 58, 105, 109, 112, 111, 114, 116, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 61, 39, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 69, 118, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 73, 100, 39, 32, 116, 121, 112, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 65, 115, 115, 101, 116, 69, 118, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 65, 115, 115, 101, 116, 69, 118, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 77, 84, 67, 97, 116, 101, 103, 111, 114, 121, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 69, 86, 69, 78, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 67, 79, 78, 68, 73, 84, 73, 79, 78, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 65, 77, 80, 76, 69, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 77, 84, 67, 97, 116, 101, 103, 111, 114, 121, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 77, 84, 67, 97, 116, 101, 103, 111, 114, 121, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 77, 84, 67, 111, 111, 114, 100, 105, 110, 97, 116, 101, 83, 121, 115, 116, 101, 109, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 67, 72, 73, 78, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 87, 79, 82, 75, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 77, 84, 67, 111, 111, 114, 100, 105, 110, 97, 116, 101, 83, 121, 115, 116, 101, 109, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 77, 84, 67, 111, 111, 114, 100, 105, 110, 97, 116, 101, 83, 121, 115, 116, 101, 109, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 77, 84, 82, 101, 112, 114, 101, 115, 101, 110, 116, 97, 116, 105, 111, 110, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 68, 73, 83, 67, 82, 69, 84, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 84, 73, 77, 69, 95, 83, 69, 82, 73, 69, 83, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 86, 65, 76, 85, 69, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 77, 84, 82, 101, 112, 114, 101, 115, 101, 110, 116, 97, 116, 105, 111, 110, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 77, 84, 82, 101, 112, 114, 101, 115, 101, 110, 116, 97, 116, 105, 111, 110, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 77, 84, 82, 101, 115, 101, 116, 84, 114, 105, 103, 103, 101, 114, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 67, 84, 73, 79, 78, 95, 67, 79, 77, 80, 76, 69, 84, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 78, 78, 85, 65, 76, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 68, 65, 89, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 73, 78, 84, 69, 78, 65, 78, 67, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 78, 85, 65, 76, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 79, 78, 84, 72, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 80, 79, 87, 69, 82, 95, 79, 78, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 72, 73, 70, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 87, 69, 69, 75, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 77, 84, 82, 101, 115, 101, 116, 84, 114, 105, 103, 103, 101, 114, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 77, 84, 82, 101, 115, 101, 116, 84, 114, 105, 103, 103, 101, 114, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 77, 84, 83, 116, 97, 116, 105, 115, 116, 105, 99, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 86, 69, 82, 65, 71, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 88, 73, 77, 85, 77, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 69, 68, 73, 65, 78, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 73, 78, 73, 77, 85, 77, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 79, 68, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 82, 65, 78, 71, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 82, 79, 79, 84, 95, 77, 69, 65, 78, 95, 83, 81, 85, 65, 82, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 84, 65, 78, 68, 65, 82, 68, 95, 68, 69, 86, 73, 65, 84, 73, 79, 78, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 77, 84, 83, 116, 97, 116, 105, 115, 116, 105, 99, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 77, 84, 83, 116, 97, 116, 105, 115, 116, 105, 99, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 77, 101, 115, 115, 97, 103, 101, 68, 97, 116, 97, 84, 121, 112, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 78, 97, 116, 105, 118, 101, 67, 111, 100, 101, 39, 32, 116, 121, 112, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 84, 101, 120, 116, 39, 32, 116, 121, 112, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 77, 101, 115, 115, 97, 103, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 77, 101, 115, 115, 97, 103, 101, 68, 97, 116, 97, 84, 121, 112, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 84, 104, 114, 101, 101, 83, 112, 97, 99, 101, 83, 97, 109, 112, 108, 101, 68, 97, 116, 97, 84, 121, 112, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 88, 39, 32, 116, 121, 112, 101, 61, 39, 120, 115, 58, 102, 108, 111, 97, 116, 39, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 89, 39, 32, 116, 121, 112, 101, 61, 39, 120, 115, 58, 102, 108, 111, 97, 116, 39, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 90, 39, 32, 116, 121, 112, 101, 61, 39, 120, 115, 58, 102, 108, 111, 97, 116, 39, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 39, 49, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 84, 104, 114, 101, 101, 83, 112, 97, 99, 101, 83, 97, 109, 112, 108, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 84, 104, 114, 101, 101, 83, 112, 97, 99, 101, 83, 97, 109, 112, 108, 101, 68, 97, 116, 97, 84, 121, 112, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 77, 84, 83, 101, 118, 101, 114, 105, 116, 121, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 70, 65, 85, 76, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 78, 79, 82, 77, 65, 76, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 87, 65, 82, 78, 73, 78, 71, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 77, 84, 83, 101, 118, 101, 114, 105, 116, 121, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 77, 84, 83, 101, 118, 101, 114, 105, 116, 121, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 81, 117, 97, 108, 105, 102, 105, 101, 114, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 72, 73, 71, 72, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 76, 79, 87, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 81, 117, 97, 108, 105, 102, 105, 101, 114, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 81, 117, 97, 108, 105, 102, 105, 101, 114, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 65, 99, 116, 105, 118, 101, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 73, 78, 65, 67, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 65, 99, 116, 105, 118, 101, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 65, 99, 116, 105, 118, 101, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 65, 118, 97, 105, 108, 97, 98, 105, 108, 105, 116, 121, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 86, 65, 73, 76, 65, 66, 76, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 85, 78, 65, 86, 65, 73, 76, 65, 66, 76, 69, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 65, 118, 97, 105, 108, 97, 98, 105, 108, 105, 116, 121, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 65, 118, 97, 105, 108, 97, 98, 105, 108, 105, 116, 121, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 65, 120, 105, 115, 67, 111, 117, 112, 108, 105, 110, 103, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 83, 84, 69, 82, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 76, 65, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 89, 78, 67, 72, 82, 79, 78, 79, 85, 83, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 84, 65, 78, 68, 69, 77, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 65, 120, 105, 115, 67, 111, 117, 112, 108, 105, 110, 103, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 65, 120, 105, 115, 67, 111, 117, 112, 108, 105, 110, 103, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 65, 120, 105, 115, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 72, 79, 77, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 80, 65, 82, 75, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 84, 79, 80, 80, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 84, 82, 65, 86, 69, 76, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 65, 120, 105, 115, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 65, 120, 105, 115, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 67, 111, 109, 112, 111, 115, 105, 116, 105, 111, 110, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 67, 76, 79, 83, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 68, 79, 87, 78, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 73, 78, 65, 67, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 76, 69, 70, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 79, 70, 70, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 79, 78, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 79, 80, 69, 78, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 82, 73, 71, 72, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 84, 82, 65, 78, 83, 73, 84, 73, 79, 78, 73, 78, 71, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 85, 78, 76, 65, 84, 67, 72, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 85, 80, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 67, 111, 109, 112, 111, 115, 105, 116, 105, 111, 110, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 67, 111, 109, 112, 111, 115, 105, 116, 105, 111, 110, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 67, 111, 110, 116, 114, 111, 108, 108, 101, 114, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 85, 84, 79, 77, 65, 84, 73, 67, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 69, 68, 73, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 78, 85, 65, 76, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 78, 85, 65, 76, 95, 68, 65, 84, 65, 95, 73, 78, 80, 85, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 69, 77, 73, 95, 65, 85, 84, 79, 77, 65, 84, 73, 67, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 67, 111, 110, 116, 114, 111, 108, 108, 101, 114, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 67, 111, 110, 116, 114, 111, 108, 108, 101, 114, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 68, 105, 114, 101, 99, 116, 105, 111, 110, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 67, 76, 79, 67, 75, 87, 73, 83, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 67, 79, 85, 78, 84, 69, 82, 95, 67, 76, 79, 67, 75, 87, 73, 83, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 78, 69, 71, 65, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 80, 79, 83, 73, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 68, 105, 114, 101, 99, 116, 105, 111, 110, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 68, 105, 114, 101, 99, 116, 105, 111, 110, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 69, 109, 101, 114, 103, 101, 110, 99, 121, 83, 116, 111, 112, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 82, 77, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 84, 82, 73, 71, 71, 69, 82, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 69, 109, 101, 114, 103, 101, 110, 99, 121, 83, 116, 111, 112, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 69, 109, 101, 114, 103, 101, 110, 99, 121, 83, 116, 111, 112, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 69, 120, 101, 99, 117, 116, 105, 111, 110, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 70, 69, 69, 68, 95, 72, 79, 76, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 73, 78, 84, 69, 82, 82, 85, 80, 84, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 79, 80, 84, 73, 79, 78, 65, 76, 95, 83, 84, 79, 80, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 82, 69, 65, 68, 89, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 80, 82, 79, 71, 82, 65, 77, 95, 67, 79, 77, 80, 76, 69, 84, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 80, 82, 79, 71, 82, 65, 77, 95, 83, 84, 79, 80, 80, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 84, 79, 80, 80, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 69, 120, 101, 99, 117, 116, 105, 111, 110, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 69, 120, 101, 99, 117, 116, 105, 111, 110, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 70, 117, 110, 99, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 73, 78, 84, 69, 78, 65, 78, 67, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 80, 82, 79, 68, 85, 67, 84, 73, 79, 78, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 80, 82, 79, 67, 69, 83, 83, 95, 68, 69, 86, 69, 76, 79, 80, 77, 69, 78, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 69, 84, 85, 80, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 84, 69, 65, 82, 68, 79, 87, 78, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 70, 117, 110, 99, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 70, 117, 110, 99, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 73, 110, 116, 101, 114, 102, 97, 99, 101, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 67, 79, 77, 80, 76, 69, 84, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 70, 65, 73, 76, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 78, 79, 84, 95, 82, 69, 65, 68, 89, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 82, 69, 65, 68, 89, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 73, 110, 116, 101, 114, 102, 97, 99, 101, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 73, 110, 116, 101, 114, 102, 97, 99, 101, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 73, 110, 116, 101, 114, 102, 97, 99, 101, 83, 116, 97, 116, 117, 115, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 68, 73, 83, 65, 66, 76, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 69, 78, 65, 66, 76, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 73, 110, 116, 101, 114, 102, 97, 99, 101, 83, 116, 97, 116, 117, 115, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 73, 110, 116, 101, 114, 102, 97, 99, 101, 83, 116, 97, 116, 117, 115, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 79, 110, 79, 102, 102, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 79, 70, 70, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 79, 78, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 79, 110, 79, 102, 102, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 79, 110, 79, 102, 102, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 79, 112, 101, 110, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 67, 76, 79, 83, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 79, 80, 69, 78, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 85, 78, 76, 65, 84, 67, 72, 69, 68, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 79, 112, 101, 110, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 79, 112, 101, 110, 83, 116, 97, 116, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 80, 97, 116, 104, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 73, 78, 68, 69, 80, 69, 78, 68, 69, 78, 84, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 65, 83, 84, 69, 82, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 77, 73, 82, 82, 79, 82, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 89, 78, 67, 72, 82, 79, 78, 79, 85, 83, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 80, 97, 116, 104, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 80, 97, 116, 104, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 80, 114, 111, 103, 114, 97, 109, 69, 100, 105, 116, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 65, 67, 84, 73, 86, 69, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 78, 79, 84, 95, 82, 69, 65, 68, 89, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 82, 69, 65, 68, 89, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 80, 114, 111, 103, 114, 97, 109, 69, 100, 105, 116, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 80, 114, 111, 103, 114, 97, 109, 69, 100, 105, 116, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 82, 111, 116, 97, 114, 121, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 67, 79, 78, 84, 79, 85, 82, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 73, 78, 68, 69, 88, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 83, 80, 73, 78, 68, 76, 69, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 82, 111, 116, 97, 114, 121, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 82, 111, 116, 97, 114, 121, 77, 111, 100, 101, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 39, 89, 101, 115, 78, 111, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 62, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 39, 120, 115, 58, 115, 116, 114, 105, 110, 103, 39, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 78, 79, 39, 47, 62, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 39, 89, 69, 83, 39, 47, 62, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 39, 89, 101, 115, 78, 111, 68, 97, 116, 97, 84, 121, 112, 101, 39, 32, 116, 121, 112, 101, 61, 39, 109, 116, 99, 58, 89, 101, 115, 78, 111, 68, 97, 116, 97, 84, 121, 112, 101, 69, 110, 117, 109, 39, 47, 62, 10, 60, 47, 120, 115, 58, 115, 99, 104, 101, 109, 97, 62};



static UA_StatusCode function_nodeset_379_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_2733_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_2733_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_2733_variant_DataContents);
variablenode_ns_1_i_2733_variant_DataContents->length = 10760;
variablenode_ns_1_i_2733_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_2733_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2733_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.MTConnect");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 92),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Opc.Ua.MTConnect"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_2733_variant_DataContents->data = NULL;
variablenode_ns_1_i_2733_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_2733_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_379_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2733)
);
}

/* EmergencyStopDataType - ns=1;i=2996 */

static UA_StatusCode function_nodeset_380_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2996_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2996_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2996_variant_DataContents);
*variablenode_ns_1_i_2996_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='EmergencyStopDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2996_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStopDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2996),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "EmergencyStopDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2996_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2996), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2995), false);
return retVal;
}

static UA_StatusCode function_nodeset_380_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2996)
);
}

/* OpenStateDataType - ns=1;i=3032 */

static UA_StatusCode function_nodeset_381_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3032_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3032_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3032_variant_DataContents);
*variablenode_ns_1_i_3032_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='OpenStateDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3032_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3032),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OpenStateDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3032_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3032), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3031), false);
return retVal;
}

static UA_StatusCode function_nodeset_381_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3032)
);
}

/* YesNoDataType - ns=1;i=3056 */

static UA_StatusCode function_nodeset_382_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3056_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3056_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3056_variant_DataContents);
*variablenode_ns_1_i_3056_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='YesNoDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3056_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "YesNoDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3056),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YesNoDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3056_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3056), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3055), false);
return retVal;
}

static UA_StatusCode function_nodeset_382_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3056)
);
}

/* RotaryModeDataType - ns=1;i=3050 */

static UA_StatusCode function_nodeset_383_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3050_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3050_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3050_variant_DataContents);
*variablenode_ns_1_i_3050_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='RotaryModeDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3050_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RotaryModeDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3050),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RotaryModeDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3050_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3050), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3049), false);
return retVal;
}

static UA_StatusCode function_nodeset_383_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3050)
);
}

/* PathModeDataType - ns=1;i=3038 */

static UA_StatusCode function_nodeset_384_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3038_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3038_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3038_variant_DataContents);
*variablenode_ns_1_i_3038_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='PathModeDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3038_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PathModeDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3038),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PathModeDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3038_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3038), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3037), false);
return retVal;
}

static UA_StatusCode function_nodeset_384_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3038)
);
}

/* FunctionalModeDataType - ns=1;i=3008 */

static UA_StatusCode function_nodeset_385_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3008_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3008_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3008_variant_DataContents);
*variablenode_ns_1_i_3008_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='FunctionalModeDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3008_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FunctionalModeDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3008),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FunctionalModeDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3008_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3008), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3007), false);
return retVal;
}

static UA_StatusCode function_nodeset_385_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3008)
);
}

/* InterfaceStateDataType - ns=1;i=3014 */

static UA_StatusCode function_nodeset_386_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3014_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3014_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3014_variant_DataContents);
*variablenode_ns_1_i_3014_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='InterfaceStateDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3014_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3014),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InterfaceStateDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3014_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3014), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3013), false);
return retVal;
}

static UA_StatusCode function_nodeset_386_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3014)
);
}

/* AssetEventDataType - ns=1;i=2749 */

static UA_StatusCode function_nodeset_387_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2749_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2749_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2749_variant_DataContents);
*variablenode_ns_1_i_2749_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='AssetEventDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2749_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "AssetEventDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A special \\gls{Variable} data type for asset change with a\\n      \\mtmodel{AssetType} and \\mtmodel{AssetId}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2749),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AssetEventDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2749_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2749), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2748), false);
return retVal;
}

static UA_StatusCode function_nodeset_387_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2749)
);
}

/* QualifierDataType - ns=1;i=2948 */

static UA_StatusCode function_nodeset_388_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2948_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2948_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2948_variant_DataContents);
*variablenode_ns_1_i_2948_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='QualifierDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2948_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "QualifierDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2948),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "QualifierDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2948_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2948), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2947), false);
return retVal;
}

static UA_StatusCode function_nodeset_388_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2948)
);
}

/* AvailabilityDataType - ns=1;i=2960 */

static UA_StatusCode function_nodeset_389_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2960_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2960_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2960_variant_DataContents);
*variablenode_ns_1_i_2960_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='AvailabilityDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2960_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailabilityDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2960),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AvailabilityDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2960_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2960), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2959), false);
return retVal;
}

static UA_StatusCode function_nodeset_389_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2960)
);
}

/* MTSeverityDataType - ns=1;i=2942 */

static UA_StatusCode function_nodeset_390_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2942_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2942_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2942_variant_DataContents);
*variablenode_ns_1_i_2942_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='MTSeverityDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2942_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSeverityDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2942),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MTSeverityDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2942_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2942), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2941), false);
return retVal;
}

static UA_StatusCode function_nodeset_390_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2942)
);
}

/* AxisCouplingDataType - ns=1;i=2966 */

static UA_StatusCode function_nodeset_391_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2966_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2966_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2966_variant_DataContents);
*variablenode_ns_1_i_2966_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='AxisCouplingDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2966_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "AxisCouplingDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2966),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AxisCouplingDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2966_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2966), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2965), false);
return retVal;
}

static UA_StatusCode function_nodeset_391_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2966)
);
}

/* MTCategoryType - ns=1;i=2770 */

static UA_StatusCode function_nodeset_392_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2770_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2770_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2770_variant_DataContents);
*variablenode_ns_1_i_2770_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='MTCategoryType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2770_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MTCategoryType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Represents the \\gls{category} attribute of the MTConnect \\gls{MTDataItem}.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2770),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MTCategoryType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2770_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2770), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2769), false);
return retVal;
}

static UA_StatusCode function_nodeset_392_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2770)
);
}

/* MTRepresentationType - ns=1;i=2832 */

static UA_StatusCode function_nodeset_393_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2832_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2832_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2832_variant_DataContents);
*variablenode_ns_1_i_2832_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='MTRepresentationType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2832_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MTRepresentationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the \\mtmodel{representation} attribute of the MTConnect\\n      \\gls{MTDataItem}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2832),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MTRepresentationType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2832_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2832), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2831), false);
return retVal;
}

static UA_StatusCode function_nodeset_393_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2832)
);
}

/* ControllerModeDataType - ns=1;i=2984 */

static UA_StatusCode function_nodeset_394_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2984_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2984_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2984_variant_DataContents);
*variablenode_ns_1_i_2984_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ControllerModeDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2984_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerModeDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2984),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ControllerModeDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2984_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2984), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2983), false);
return retVal;
}

static UA_StatusCode function_nodeset_394_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2984)
);
}

/* MessageDataType - ns=1;i=2907 */

static UA_StatusCode function_nodeset_395_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2907_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2907_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2907_variant_DataContents);
*variablenode_ns_1_i_2907_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='MessageDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2907_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MessageDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2907),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MessageDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2907_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2907), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2906), false);
return retVal;
}

static UA_StatusCode function_nodeset_395_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2907)
);
}

/* Deprecated - ns=1;i=2736 */

static UA_StatusCode function_nodeset_396_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_2736_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_2736_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_2736_variant_DataContents);
*variablenode_ns_1_i_2736_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2736_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Deprecated");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2736),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Deprecated"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_2736_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_396_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2736)
);
}

/* ProgramEditDataType - ns=1;i=3044 */

static UA_StatusCode function_nodeset_397_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3044_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3044_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3044_variant_DataContents);
*variablenode_ns_1_i_3044_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ProgramEditDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3044_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramEditDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3044),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ProgramEditDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3044_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3044), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3043), false);
return retVal;
}

static UA_StatusCode function_nodeset_397_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3044)
);
}

/* MTCoordinateSystemType - ns=1;i=2790 */

static UA_StatusCode function_nodeset_398_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2790_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2790_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2790_variant_DataContents);
*variablenode_ns_1_i_2790_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='MTCoordinateSystemType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2790_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MTCoordinateSystemType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the \\mtmodel{coordinateSystem} attribute of the MTConnect\\n      \\gls{MTDataItem}.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2790),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MTCoordinateSystemType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2790_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2790), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2789), false);
return retVal;
}

static UA_StatusCode function_nodeset_398_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2790)
);
}

/* OnOffDataType - ns=1;i=3026 */

static UA_StatusCode function_nodeset_399_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3026_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3026_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3026_variant_DataContents);
*variablenode_ns_1_i_3026_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='OnOffDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3026_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnOffDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3026),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OnOffDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3026_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3026), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3025), false);
return retVal;
}

static UA_StatusCode function_nodeset_399_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3026)
);
}

/* NamespaceUri - ns=1;i=2735 */

static UA_StatusCode function_nodeset_400_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2735_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2735_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2735_variant_DataContents);
*variablenode_ns_1_i_2735_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/MTConnect/v2/Types.xsd");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2735_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2735),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2735_variant_DataContents);
return retVal;
}

static UA_StatusCode function_nodeset_400_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2735)
);
}

/* ExecutionDataType - ns=1;i=3002 */

static UA_StatusCode function_nodeset_401_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3002_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3002_variant_DataContents);
*variablenode_ns_1_i_3002_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ExecutionDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3002_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ExecutionDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3002),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ExecutionDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3002_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3002), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3001), false);
return retVal;
}

static UA_StatusCode function_nodeset_401_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3002)
);
}

/* InterfaceStatusDataType - ns=1;i=3020 */

static UA_StatusCode function_nodeset_402_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3020_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3020_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3020_variant_DataContents);
*variablenode_ns_1_i_3020_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='InterfaceStatusDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3020_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceStatusDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3020),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InterfaceStatusDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3020_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3020), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3019), false);
return retVal;
}

static UA_StatusCode function_nodeset_402_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3020)
);
}

/* AxisStateDataType - ns=1;i=2972 */

static UA_StatusCode function_nodeset_403_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2972_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2972_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2972_variant_DataContents);
*variablenode_ns_1_i_2972_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='AxisStateDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2972_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "AxisStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2972),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AxisStateDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2972_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2972), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2971), false);
return retVal;
}

static UA_StatusCode function_nodeset_403_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2972)
);
}

/* CompositionStateDataType - ns=1;i=2978 */

static UA_StatusCode function_nodeset_404_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2978_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2978_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2978_variant_DataContents);
*variablenode_ns_1_i_2978_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='CompositionStateDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2978_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "CompositionStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2978),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CompositionStateDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2978_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2978), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2977), false);
return retVal;
}

static UA_StatusCode function_nodeset_404_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2978)
);
}

/* DirectionDataType - ns=1;i=2990 */

static UA_StatusCode function_nodeset_405_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2990_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2990_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2990_variant_DataContents);
*variablenode_ns_1_i_2990_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='DirectionDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2990_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DirectionDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2990),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DirectionDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2990_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2990), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2989), false);
return retVal;
}

static UA_StatusCode function_nodeset_405_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2990)
);
}

/* MTResetTriggerType - ns=1;i=2838 */

static UA_StatusCode function_nodeset_406_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2838_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2838_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2838_variant_DataContents);
*variablenode_ns_1_i_2838_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='MTResetTriggerType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2838_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MTResetTriggerType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These need to become \\uamodel{Good_} status code in OPC UA. resettrigger\\n      is an optional XML element that identifies the type of event that may\\n      cause a reset to occur. It is additional information regarding the meaning\\n      of the data that establishes an understanding of the time frame that the\\n      data represents so that the data may be correctly understood by a client\\n      software application.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2838),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MTResetTriggerType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2838_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2838), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2837), false);
return retVal;
}

static UA_StatusCode function_nodeset_406_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2838)
);
}

/* ThreeSpaceSampleDataType - ns=1;i=2913 */

static UA_StatusCode function_nodeset_407_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2913_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2913_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2913_variant_DataContents);
*variablenode_ns_1_i_2913_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ThreeSpaceSampleDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2913_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ThreeSpaceSampleDataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents a position in a three space coordinate system. The positions\\n      must be given in millimeters.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2913),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ThreeSpaceSampleDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2913_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2913), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2912), false);
return retVal;
}

static UA_StatusCode function_nodeset_407_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2913)
);
}

/* MTStatisticType - ns=1;i=2866 */

static UA_StatusCode function_nodeset_408_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2866_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2866_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2866_variant_DataContents);
*variablenode_ns_1_i_2866_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='MTStatisticType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2866_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MTStatisticType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2866),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MTStatisticType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2866_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2866), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2865), false);
return retVal;
}

static UA_StatusCode function_nodeset_408_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2866)
);
}

/* ActiveStateDataType - ns=1;i=2954 */

static UA_StatusCode function_nodeset_409_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2954_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2954_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2954_variant_DataContents);
*variablenode_ns_1_i_2954_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ActiveStateDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2954_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActiveStateDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2954),
UA_NODEID_NUMERIC(ns[1], 2733),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActiveStateDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2954_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2954), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2953), false);
return retVal;
}

static UA_StatusCode function_nodeset_409_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2954)
);
}

/* MTSampleType - ns=1;i=2429 */

static UA_StatusCode function_nodeset_410_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSampleType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Data Items with category \\mtmodel{SAMPLE}. The simplest mapping since all\\n      these types are floating point numeric data and comply with the\\n      \\uamodel{AnalogUnitType} from \\cite{UAPart8} Amendment 1. In ammendment 1,\\n      the \\uamodel{EURange} is optional. \\uamodel{EngineeringUnits} for all\\n      \\mtuatype{MTSampleType} Data Items. The \\uamodel{EURange} will becreated\\n      if the \\mtmodel{Constraints} element exists and both \\mtmodel{Maximum} and\\n      \\m" "tmodel{Minimum} values are given. An XML element that provides the\\n      information and data reported from a piece of equipment for those dataitem\\n      elements defined with a category attribute of sample category in the\\n      mtconnectdevices document. \\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 17497),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTSampleType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_410_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2429)
);
}

/* PeriodFilter - ns=1;i=2847 */

static UA_StatusCode function_nodeset_411_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "PeriodFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2847),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "PeriodFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2847), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_411_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2847)
);
}

/* SignificantDigits - ns=1;i=2853 */

static UA_StatusCode function_nodeset_412_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
attr.displayName = UA_LOCALIZEDTEXT("", "SignificantDigits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2853),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SignificantDigits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2853), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_412_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2853)
);
}

/* Statistic - ns=1;i=2854 */

static UA_StatusCode function_nodeset_413_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2659);
attr.displayName = UA_LOCALIZEDTEXT("", "Statistic");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2854),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Statistic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2854), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_413_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2854)
);
}

/* NativeUnits - ns=1;i=2855 */

static UA_StatusCode function_nodeset_414_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NativeUnits");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2855),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "NativeUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2855), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_414_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2855)
);
}

/* CoordinateSystem - ns=1;i=2856 */

static UA_StatusCode function_nodeset_415_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2635);
attr.displayName = UA_LOCALIZEDTEXT("", "CoordinateSystem");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2856),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "CoordinateSystem"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2856), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_415_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2856)
);
}

/* InitialValue - ns=1;i=2857 */

static UA_StatusCode function_nodeset_416_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "InitialValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2857),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InitialValue"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2857), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_416_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2857)
);
}

/* ResetTrigger - ns=1;i=2858 */

static UA_StatusCode function_nodeset_417_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2636);
attr.displayName = UA_LOCALIZEDTEXT("", "ResetTrigger");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2858),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ResetTrigger"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2858), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_417_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2858)
);
}

/* Units - ns=1;i=2859 */

static UA_StatusCode function_nodeset_418_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Units");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2859),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Units"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2859), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_418_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2859)
);
}

/* SampleRate - ns=1;i=2845 */

static UA_StatusCode function_nodeset_419_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "SampleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2845),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2845), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_419_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2845)
);
}

/* SourceData - ns=1;i=2844 */

static UA_StatusCode function_nodeset_420_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2844),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SourceData"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2844), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_420_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2844)
);
}

/* MTSubTypeName - ns=1;i=2843 */

static UA_StatusCode function_nodeset_421_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTSubTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2843),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTSubTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2843), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_421_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2843)
);
}

/* MTTypeName - ns=1;i=2842 */

static UA_StatusCode function_nodeset_422_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2842),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2842), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_422_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2842)
);
}

/* Category - ns=1;i=2841 */

static UA_StatusCode function_nodeset_423_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2634);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2841),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2841), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_423_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2841)
);
}

/* XmlId - ns=1;i=2839 */

static UA_StatusCode function_nodeset_424_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2839),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2839), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_424_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2839)
);
}

/* Constraints - ns=1;i=2848 */

static UA_StatusCode function_nodeset_425_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Constraints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2848),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Constraints"),
UA_NODEID_NUMERIC(ns[1], 2647),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2848), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_425_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2848)
);
}

/* Values - ns=1;i=2849 */

static UA_StatusCode function_nodeset_426_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Values");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2849),
UA_NODEID_NUMERIC(ns[1], 2848),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Values"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2849), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_426_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2849)
);
}

/* Maximum - ns=1;i=2851 */

static UA_StatusCode function_nodeset_427_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Maximum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2851),
UA_NODEID_NUMERIC(ns[1], 2848),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Maximum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2851), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_427_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2851)
);
}

/* Minimum - ns=1;i=2850 */

static UA_StatusCode function_nodeset_428_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Minimum");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2850),
UA_NODEID_NUMERIC(ns[1], 2848),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Minimum"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2850), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_428_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2850)
);
}

/* Nominal - ns=1;i=2852 */

static UA_StatusCode function_nodeset_429_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "Nominal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The MTConnect constraints. The Values or the Minimum, Maximum, and Nominal\\n      values should be provided. Multiple Values can be provided as an array as\\n      a set of allowable values for this \\gls{MTDataItem}. A constraint is used\\n      by a software application to evaluate the validity of the reported data.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2852),
UA_NODEID_NUMERIC(ns[1], 2848),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Nominal"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2852), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_429_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2852)
);
}

/* Duration - ns=1;i=3672 */

static UA_StatusCode function_nodeset_430_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290);
attr.displayName = UA_LOCALIZEDTEXT("", "Duration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3672),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Duration"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3672), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_430_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3672)
);
}

/* MinimumDeltaFilter - ns=1;i=2860 */

static UA_StatusCode function_nodeset_431_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
attr.displayName = UA_LOCALIZEDTEXT("", "MinimumDeltaFilter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2860),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MinimumDeltaFilter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2860), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_431_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2860)
);
}

/* Representation - ns=1;i=2846 */

static UA_StatusCode function_nodeset_432_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2633);
attr.displayName = UA_LOCALIZEDTEXT("", "Representation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2846),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Representation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2846), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_432_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2846)
);
}

/* ResetTriggeredReason - ns=1;i=3676 */

static UA_StatusCode function_nodeset_433_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 2636);
attr.displayName = UA_LOCALIZEDTEXT("", "ResetTriggeredReason");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      These are the additional attributes that are relevent to numeric data\\n      items. The factory will evaluate these values and will set the engineering\\n      units and the range associated with the parent entity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3676),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ResetTriggeredReason"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3676), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_433_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3676)
);
}

/* Name - ns=1;i=2840 */

static UA_StatusCode function_nodeset_434_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The data item mixin will inject the properties and the methods into the\\n      related classes. This facility is similar to the Ruby module mixin or the\\n      Scala traits. data entity describing a piece of information reported about\\n      a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2840),
UA_NODEID_NUMERIC(ns[1], 2429),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2840), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_434_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2840)
);
}

/* MTDataItemClassType - ns=1;i=2425 */

static UA_StatusCode function_nodeset_435_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTDataItemClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Abstract base class for all the data item class types. The names are\\n      created by pascal typing the names and then generating appending\\n      \\mtmodel{Type}. data entity describing a piece of information reported\\n      about a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2425),
UA_NODEID_NUMERIC(ns[0], 11163),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTDataItemClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_435_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2425)
);
}

/* MTSampleClassType - ns=1;i=2345 */

static UA_StatusCode function_nodeset_436_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTSampleClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base type class for all data items with a \\gls{category} of\\n      \\mtmodel{SAMPLE}. An XML element that provides the information and data\\n      reported from a piece of equipment for those dataitem elements defined\\n      with a category attribute of sample category in the mtconnectdevices\\n      document. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[1], 2425),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTSampleClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_436_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2345)
);
}

/* ClockTimeClassType - ns=1;i=2279 */

static UA_StatusCode function_nodeset_437_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ClockTimeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The value provided by a timing device at a specific point in time.\\n      $TIMESTAMP$ The value provided by a timing device at a specific point in\\n      time.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2279),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ClockTimeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_437_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2279)
);
}

/* ResistenceClassType - ns=1;i=2317 */

static UA_StatusCode function_nodeset_438_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ResistenceClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The degree to which a substance opposes the passage of an electric\\n      current. $OHM$\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2317),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ResistenceClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_438_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2317)
);
}

/* AngularVelocityClassType - ns=1;i=2271 */

static UA_StatusCode function_nodeset_439_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AngularVelocityClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Rate of change of angular position. $\\frac{DEGREE}{SECOND}$ The\\n      measurement of the rate of change of angular position.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2271),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AngularVelocityClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_439_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2271)
);
}

/* PathFeedrateClassType - ns=1;i=2303 */

static UA_StatusCode function_nodeset_440_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PathFeedrateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The feedrate for the axes, or a single axis, associated with a\\n      \\mtmodel{Path} component a vector. $\\frac{MILLIMETER}{SECOND}$ The\\n      measurement of the feedrate for the axes, or a single axis, associated\\n      with a path component-a vector.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2303),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PathFeedrateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_440_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2303)
);
}

/* TemperatureClassType - ns=1;i=2325 */

static UA_StatusCode function_nodeset_441_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TemperatureClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The measurement of temperature. $CELSIUS$ The measurement of temperature.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2325),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TemperatureClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_441_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2325)
);
}

/* ProcessTimerClassType - ns=1;i=2315 */

static UA_StatusCode function_nodeset_442_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProcessTimerClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the amount of time a piece of equipment has performed\\n      different types of activities associated with the process being performed\\n      at that piece of equipment. Multiple subtypes of \\mtmodel{PROCESS_TIMER}\\n      may be defined. Typically, \\mtmodel{PROCESS_TIMER} SHOULD be modeled as a\\n      data item for the Device element, but MAY be modeled for either a\\n      Controller or Path Structural Element in the XML document. A \\gls{subType}\\n      MUST " "always be specified. $SECOND$ The measurement of the amount of time a\\n      piece of equipment has performed different types of activities associated\\n      with the process being performed at that piece of equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2315),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProcessTimerClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_442_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2315)
);
}

/* AmperageClassType - ns=1;i=2273 */

static UA_StatusCode function_nodeset_443_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AmperageClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of electrical current. $AMPERE$ The measurement of\\n      electrical current.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2273),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AmperageClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_443_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2273)
);
}

/* LoadClassType - ns=1;i=2263 */

static UA_StatusCode function_nodeset_444_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LoadClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the actual versus the standard rating of a piece of\\n      equipment. $PERCENT$ The measurement of the actual versus the standard\\n      rating of a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2263),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LoadClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_444_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2263)
);
}

/* SoundLevelClassType - ns=1;i=2321 */

static UA_StatusCode function_nodeset_445_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SoundLevelClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Measurement of a sound level or sound pressure level relative to\\n      atmospheric pressure. $DECIBEL$ The measurement of a sound level or sound\\n      pressure level relative to atmospheric pressure.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2321),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "SoundLevelClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_445_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2321)
);
}

/* StrainClassType - ns=1;i=2323 */

static UA_StatusCode function_nodeset_446_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StrainClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The amount of deformation per unit length of an object when a load is\\n      applied. $PERCENT$ The measurement of the amount of deformation per unit\\n      length of an object when a load is applied.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2323),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "StrainClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_446_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2323)
);
}

/* AxisFeedrateClassType - ns=1;i=2277 */

static UA_StatusCode function_nodeset_447_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisFeedrateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The feedrate of a linear axis. $\\frac{MILLIMETER}{SECOND}$ The measurement\\n      of the feedrate of a linear axis.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2277),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AxisFeedrateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_447_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2277)
);
}

/* TorqueClassType - ns=1;i=2331 */

static UA_StatusCode function_nodeset_448_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TorqueClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The turning force exerted on an object or by an object. $NEWTON \\times\\n      METER$ The measurement of the turning force exerted on an object or by an\\n      object.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2331),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TorqueClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_448_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2331)
);
}

/* VoltageClassType - ns=1;i=2341 */

static UA_StatusCode function_nodeset_449_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VoltageClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of electrical potential between two points. $VOLT$ The\\n      measurement of electrical potential between two points.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2341),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "VoltageClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_449_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2341)
);
}

/* FrequencyClassType - ns=1;i=2295 */

static UA_StatusCode function_nodeset_450_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FrequencyClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the number of occurrences of a repeating event per unit\\n      time. $HERTZ$ The measurement of the number of occurrences of a repeating\\n      event per unit time.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2295),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "FrequencyClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_450_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2295)
);
}

/* LengthClassType - ns=1;i=2297 */

static UA_StatusCode function_nodeset_451_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LengthClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The length of an object. $MILLIMETER$ The measurement of the length of an\\n      object.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2297),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LengthClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_451_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2297)
);
}

/* PHClassType - ns=1;i=2307 */

static UA_StatusCode function_nodeset_452_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PHClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measure of the acidity or alkalinity. $PH$ A measure of the acidity or\\n      alkalinity of a solution.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2307),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PHClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_452_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2307)
);
}

/* FlowClassType - ns=1;i=2293 */

static UA_StatusCode function_nodeset_453_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FlowClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The rate of flow of a fluid. $\\frac{LITER}{SECOND}$ The measurement of the\\n      rate of flow of a fluid.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2293),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "FlowClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_453_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2293)
);
}

/* LinearForceClassType - ns=1;i=2299 */

static UA_StatusCode function_nodeset_454_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LinearForceClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measure of the push or pull introduced by an actuator or exerted on an\\n      object. $NEWTON$ The measurement of the push or pull introduced by an\\n      actuator or exerted on an object.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2299),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LinearForceClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_454_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2299)
);
}

/* AngularAccelerationClassType - ns=1;i=2269 */

static UA_StatusCode function_nodeset_455_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AngularAccelerationClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Rate of change of angular velocity. $\\frac{DEGREE}{SECOND^{2}}$ The\\n      measurement rate of change of angular velocity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2269),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AngularAccelerationClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_455_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2269)
);
}

/* AccumulatedTimeClassType - ns=1;i=2267 */

static UA_StatusCode function_nodeset_456_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AccumulatedTimeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of accumulated time for an activity or event. $SECOND$ The\\n      measurement of accumulated time for an activity or event.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2267),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AccumulatedTimeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_456_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2267)
);
}

/* AngleClassType - ns=1;i=2275 */

static UA_StatusCode function_nodeset_457_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AngleClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of angular position. $DEGREE$ The measurement of angular\\n      position.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2275),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AngleClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_457_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2275)
);
}

/* VoltAmpereReactiveClassType - ns=1;i=2337 */

static UA_StatusCode function_nodeset_458_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VoltAmpereReactiveClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of reactive power in an AC electrical circuit (commonly\\n      referred to as VAR). $VOLT \\times AMPERE (Reactive)$ The measurement of\\n      reactive power in an AC electrical circuit (commonly referred to as VAR).\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2337),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "VoltAmpereReactiveClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_458_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2337)
);
}

/* TiltClassType - ns=1;i=2329 */

static UA_StatusCode function_nodeset_459_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TiltClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A measurement of angular displacement. $MICRO \\cdot RADIAN$ The\\n      measurement of angular displacement. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2329),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TiltClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_459_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2329)
);
}

/* TensionClassType - ns=1;i=2327 */

static UA_StatusCode function_nodeset_460_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TensionClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A measurement of a force that stretches or elongates an object. $NEWTON$\\n      The measurement of a force that stretches or elongates an object.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2327),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TensionClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_460_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2327)
);
}

/* VelocityClassType - ns=1;i=2335 */

static UA_StatusCode function_nodeset_461_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VelocityClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The rate of change of position. $\\frac{MILLIMETER}{SECOND}$ The\\n      measurement of the rate of change of position of a component.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2335),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "VelocityClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_461_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2335)
);
}

/* ConductivityClassType - ns=1;i=2283 */

static UA_StatusCode function_nodeset_462_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConductivityClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The ability of a material to conduct electricity. $\\frac{SIEMENS}{METER}$\\n      The measurement of the ability of a material to conduct electricity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2283),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ConductivityClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_462_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2283)
);
}

/* MassClassType - ns=1;i=2301 */

static UA_StatusCode function_nodeset_463_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MassClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the mass of an object(s) or an amount of material.\\n      $KILOGRAM$ The measurement of the mass of an object(s) or an amount of\\n      material.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2301),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MassClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_463_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2301)
);
}

/* FillLevelClassType - ns=1;i=2291 */

static UA_StatusCode function_nodeset_464_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FillLevelClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the amount of a substance remaining compared to the\\n      planned maximum amount of that substance. $PERCENT$ The measurement of the\\n      amount of a substance remaining compared to the planned maximum amount of\\n      that substance.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2291),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "FillLevelClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_464_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2291)
);
}

/* PressureClassType - ns=1;i=2313 */

static UA_StatusCode function_nodeset_465_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PressureClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The force per unit area exerted by a gas or liquid. $PASCAL$ The\\n      measurement of force per unit area exerted by a gas or liquid.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2313),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PressureClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_465_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2313)
);
}

/* VoltAmpereClassType - ns=1;i=2333 */

static UA_StatusCode function_nodeset_466_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VoltAmpereClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measure of the apparent power in an electrical circuit, equal to the\\n      product of root-mean-square (RMS) voltage and RMS current (commonly\\n      referred to as VA). $VOLT \\times AMPERE$ The measurement of the apparent\\n      power in an electrical circuit, equal to the product of root-mean-square\\n      (RMS) voltage and RMS current (commonly referred to as VA).\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2333),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "VoltAmpereClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_466_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2333)
);
}

/* PositionClassType - ns=1;i=2309 */

static UA_StatusCode function_nodeset_467_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PositionClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A calculated or measured position related to a Component element.\\n      \\mtmodel{POSITION} SHOULD be further defined\\n      withacoordinateSytemattribute. If a coordinateSystem attribute is not\\n      specified, the position of the control point MUST be reported in\\n      \\mtmodel{MACHINE} coordinates. $MILLIMETER$ A measured or calculated\\n      position of a component element as reported by a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2309),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PositionClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_467_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2309)
);
}

/* PathPositionClassType - ns=1;i=2305 */

static UA_StatusCode function_nodeset_468_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PathPositionClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A measured or calculated position of a control point associated with a\\n      \\mtmodel{Controller} element, or PATH element if provided, of a piece of\\n      equipment. The control point MUST be reported as a set of space-delimited\\n      floating-point numbers representing a point in 3-D space. The position of\\n      the control point MUST be reported in units of \\mtmodel{MILLIMETER} and\\n      listed in order of X, Y, and Z referenced to the coordinate system of the\\n      pie" "ce of equipment. $MILLIMETER (\\mathbb{R}^{3})$ A measured or calculated\\n      position of a control point associated with a controller element, or path\\n      element if provided, of a piece of equipment.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2305),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PathPositionClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_468_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2305)
);
}

/* RotaryVelocityClassType - ns=1;i=2319 */

static UA_StatusCode function_nodeset_469_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RotaryVelocityClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The rotational speed of a rotary axis. $\\frac{REVOLUTION}{MINUTE}$ The\\n      measurement of the rotational speed of a rotary axis.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2319),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RotaryVelocityClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_469_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2319)
);
}

/* EquipmentTimerClassType - ns=1;i=2289 */

static UA_StatusCode function_nodeset_470_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentTimerClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the amount of time a \\mtmodel{SECOND} piece of\\n      equipment or a sub-part of a piece of equipment has performed specific\\n      activities. Often used to determine when maintenance may be required for\\n      the equipment. Multiple subTypes of \\mtmodel{EQUIPMENT_TIMER} MAY be\\n      defined. A subType MUST always be specified. $SECOND$ The measurement of\\n      the amount of time a piece of equipment or a sub-part of a piece of\\n      equipment has perform" "ed specific activities.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2289),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EquipmentTimerClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_470_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2289)
);
}

/* AccelerationClassType - ns=1;i=2265 */

static UA_StatusCode function_nodeset_471_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AccelerationClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Rate of change of velocity. $\\frac{MILLIMETER}{SECOND^{2}}$ The\\n      measurement of the rate of change of velocity.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2265),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AccelerationClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_471_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2265)
);
}

/* ViscosityClassType - ns=1;i=2339 */

static UA_StatusCode function_nodeset_472_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ViscosityClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A measurement of a fluid’s resistance to flow. $PASCAL \\times SECOND$. The\\n      measurement of a fluids resistance to flow.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2339),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ViscosityClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_472_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2339)
);
}

/* PowerFactorClassType - ns=1;i=2311 */

static UA_StatusCode function_nodeset_473_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerFactorClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the ratio of real power flowing to a load to the\\n      apparent power in that AC circuit. $PERCENT$ The measurement of the ratio\\n      of real power flowing to a load to the apparent power in that AC circuit.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2311),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PowerFactorClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_473_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2311)
);
}

/* ConcentrationClassType - ns=1;i=2281 */

static UA_StatusCode function_nodeset_474_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConcentrationClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Percentage of one component within a mixture of components. $PERCENT$ The\\n      measurement of the percentage of one component within a mixture of\\n      components\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2281),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ConcentrationClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_474_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2281)
);
}

/* WattageClassType - ns=1;i=2343 */

static UA_StatusCode function_nodeset_475_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WattageClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of power flowing through or dissipated by an electrical\\n      circuit or piece of equipment. $WATT$ The measurement of power flowing\\n      through or dissipated by an electrical circuit or piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2343),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "WattageClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_475_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2343)
);
}

/* ElectricalEnergyClassType - ns=1;i=2287 */

static UA_StatusCode function_nodeset_476_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ElectricalEnergyClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of electrical energy consumption by a component. $WATT\\n      \\times SECOND$ The measurement of electrical energy consumption by a\\n      component.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2287),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ElectricalEnergyClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_476_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2287)
);
}

/* DisplacementClassType - ns=1;i=2285 */

static UA_StatusCode function_nodeset_477_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DisplacementClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The change in position of an object. $MILLIMETER$ The measurement of the\\n      change in position of an object.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2285),
UA_NODEID_NUMERIC(ns[1], 2345),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DisplacementClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_477_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2285)
);
}

/* MTEventClassType - ns=1;i=2631 */

static UA_StatusCode function_nodeset_478_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTEventClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base type class for all data items with a \\gls{category} of\\n      \\mtmodel{EVENT}. An XML element which provides the information and data\\n      reported from a piece of equipment for those dataitem elements defined\\n      with a category attribute of event category in the mtconnectdevices\\n      document.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2631),
UA_NODEID_NUMERIC(ns[1], 2425),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTEventClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_478_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2631)
);
}

/* MTStringEventClassType - ns=1;i=2361 */

static UA_StatusCode function_nodeset_479_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTStringEventClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The base UA \\gls{Type} for all \\glspl{MTDataItem} that have a non-specific\\n      text representation.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[1], 2631),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTStringEventClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_479_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2361)
);
}

/* ToolAssetIdClassType - ns=1;i=2389 */

static UA_StatusCode function_nodeset_480_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ToolAssetIdClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier of an individual tool asset The identifier of an individual\\n      tool asset.The valid data value must be a text string.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2389),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ToolAssetIdClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_480_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2389)
);
}

/* BlockClassType - ns=1;i=2363 */

static UA_StatusCode function_nodeset_481_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BlockClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The line of code or command being executed by a \\mtmodel{Controller}\\n      \\mtterm{Structural Element}. The value reported for \\mtmodel{Block} MUST\\n      include the entire expression for a line of program code, including all\\n      parameters. The line of code or command being executed by a controller\\n      structural element.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2363),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "BlockClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_481_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2363)
);
}

/* LineClassType - ns=1;i=2409 */

static UA_StatusCode function_nodeset_482_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LineClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DEPRECATED in Version 1.4.0.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2409),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LineClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_482_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2409)
);
}

/* ToolOffsetClassType - ns=1;i=2393 */

static UA_StatusCode function_nodeset_483_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ToolOffsetClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A reference to the tool offset variables applied to the active cutting\\n      tool associated with a Path in a Controller type component. The valid data\\n      value MUST be a text string. The reported value returned for\\n      \\mtmodel{TOOL_OFFSET} identifies the location in a table or list where the\\n      actual tool offset values are stored. A \\gls{subType} MUST always be\\n      specified. A reference to the tool offset variables applied to the active\\n      cutting tool ass" "ociated with a path in a controller type component.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2393),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ToolOffsetClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_483_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2393)
);
}

/* LineLabelClassType - ns=1;i=2367 */

static UA_StatusCode function_nodeset_484_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LineLabelClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An optional identifier for a \\mtmodel{BLOCK} of code in a\\n      \\mtmodel{PROGRAM}. An optional identifier for a block event of code in a\\n      program event.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2367),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LineLabelClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_484_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2367)
);
}

/* CoupledAxesClassType - ns=1;i=2365 */

static UA_StatusCode function_nodeset_485_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CoupledAxesClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Refers to the set of associated axes. The valid data value for\\n      \\mtmodel{COUPLED_AXES} SHOULD be a space-delimited set of axes reported as\\n      the value of the name attribute for each axis. If name is not available,\\n      the piece of equipment MUST report the value of the nativeName attribute\\n      for each axis. Refers to the set of associated axes.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2365),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CoupledAxesClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_485_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2365)
);
}

/* MessageClassType - ns=1;i=2403 */

static UA_StatusCode function_nodeset_486_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MessageClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       Any text string of information to be transferred from a piece of\\n      equipment to a client software application.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2403),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MessageClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_486_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2403)
);
}

/* ProgramCommentClassType - ns=1;i=2385 */

static UA_StatusCode function_nodeset_487_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramCommentClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A comment or non-executable statement in the control program. A comment or\\n      non-executable statement in the control program. The valid data value must\\n      be a text string.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2385),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProgramCommentClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_487_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2385)
);
}

/* WorkOffsetClassType - ns=1;i=2401 */

static UA_StatusCode function_nodeset_488_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WorkOffsetClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A reference to the offset variables for a work piece or part associated\\n      with a Path in a Controller type component. The valid data value MUST be a\\n      text string. The reported value returned for \\mtmodel{WORK_OFFSET}\\n      identifies the location in a table or list where the actual tool offset\\n      values are stored. A reference to the offset variables for a work piece or\\n      part associated with a path in a controller type component.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2401),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "WorkOffsetClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_488_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2401)
);
}

/* MaterialClassType - ns=1;i=2369 */

static UA_StatusCode function_nodeset_489_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier of a material used or consumed in the manufacturing\\n      process. The identifier of a material used or consumed in the\\n      manufacturing process.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2369),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_489_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2369)
);
}

/* AssetRemovedClassType - ns=1;i=2407 */

static UA_StatusCode function_nodeset_490_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AssetRemovedClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       The value of the cdata for the event MUST be the assetid of the asset\\n      that has been removed. The asset will still be visible if requested with\\n      the includeremoved parameter as described in the protocol section. When\\n      assets are removed they are not moved to the beginning of the most\\n      recently modified list. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2407),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AssetRemovedClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_490_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2407)
);
}

/* ProgramEditNameClassType - ns=1;i=2381 */

static UA_StatusCode function_nodeset_491_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramEditNameClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The name of the program being edited. This is used in conjunction with\\n      \\mtmodel{PROGRAM_EDIT} when in \\mtmodel{ACTIVE} state. The name of the\\n      program being edited. This is used in conjunction with programedit event\\n      when in active value state. The valid data value must be a text string.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2381),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProgramEditNameClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_491_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2381)
);
}

/* AssetChangedClassType - ns=1;i=2405 */

static UA_StatusCode function_nodeset_492_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AssetChangedClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       The value of the cdata for the event MUST be the assetid of the asset\\n      that has been added or changed. There will not be a separate message for\\n      new assets.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2405),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AssetChangedClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_492_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2405)
);
}

/* ProgramHeaderClassType - ns=1;i=2383 */

static UA_StatusCode function_nodeset_493_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramHeaderClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The non-executable header section of the control program. The\\n      non-executable header section of the control program.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2383),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProgramHeaderClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_493_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2383)
);
}

/* SerialNumberClassType - ns=1;i=2387 */

static UA_StatusCode function_nodeset_494_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumberClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The serial number associated with a \\mtmodel{Component}, \\mtmodel{Asset},\\n      or \\mtmodel{Device}. The serial number associated with a component, asset\\n      mtconnectassets, or device. The valid data value must be a text string.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2387),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "SerialNumberClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_494_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2387)
);
}

/* OperatorIdClassType - ns=1;i=2371 */

static UA_StatusCode function_nodeset_495_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperatorIdClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier of the person currently responsible for operating the piece\\n      of equipment. DEPRECATION WARNING: May be deprecated in the future. See\\n      \\mtmodel{USER} below. The identifier of the person currently responsible\\n      for operating the piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2371),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OperatorIdClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_495_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2371)
);
}

/* WorkholdingClassType - ns=1;i=2399 */

static UA_StatusCode function_nodeset_496_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WorkholdingClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The identifier for the workholding currently in use.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2399),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "WorkholdingClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_496_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2399)
);
}

/* PartIdClassType - ns=1;i=2375 */

static UA_StatusCode function_nodeset_497_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PartIdClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An identifier of a part in a manufacturing operation. An identifier of a\\n      part in a manufacturing operation.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2375),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PartIdClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_497_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2375)
);
}

/* PartNumberClassType - ns=1;i=2377 */

static UA_StatusCode function_nodeset_498_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PartNumberClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An identifier of a part or product moving through the manufacturing\\n      process. An identifier of a part or product moving through the\\n      manufacturing process. The valid data value must be a text string. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2377),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PartNumberClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_498_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2377)
);
}

/* ProgramClassType - ns=1;i=2379 */

static UA_StatusCode function_nodeset_499_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The name of the logic or motion program being executed by the\\n      \\mtmodel{Controller} or \\mtmodel{Path} component. The name of the logic or\\n      motion program being executed by the controller component.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2379),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProgramClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_499_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2379)
);
}

/* ToolNumberClassType - ns=1;i=2391 */

static UA_StatusCode function_nodeset_500_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ToolNumberClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier of a tool provided by the piece of equipment controller.\\n      The identifier assigned by the controller component to a cutting tool when\\n      in use by a piece of equipment. The valid data value must be a text\\n      string.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2391),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ToolNumberClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_500_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2391)
);
}

/* WireClassType - ns=1;i=2397 */

static UA_StatusCode function_nodeset_501_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WireClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier for the type of wire used as the cutting mechanism in\\n      Electrical Discharge Machining or similar processes. A string like piece\\n      or filament of relatively rigid or flexible material provided in a variety\\n      of diameters.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2397),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "WireClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_501_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2397)
);
}

/* UserClassType - ns=1;i=2395 */

static UA_StatusCode function_nodeset_502_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UserClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The identifier of the person currently responsible for operating the piece\\n      of equipment. A \\gls{subType} MUST always be specified. The identifier of\\n      the person currently responsible for operating the piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2395),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "UserClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_502_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2395)
);
}

/* PalletIdClassType - ns=1;i=2373 */

static UA_StatusCode function_nodeset_503_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PalletIdClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The identifier for a pallet. The identifier for a pallet.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2373),
UA_NODEID_NUMERIC(ns[1], 2361),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PalletIdClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_503_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2373)
);
}

/* MTControlledVocabEventClassType - ns=1;i=2144 */

static UA_StatusCode function_nodeset_504_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTControlledVocabEventClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The abstract base type for controlled events that represent states that\\n      are provided in related enumerations. These data items will be represented\\n      in an object of type \\mtuatype{MTControlledVocabEventType} derived from\\n      the OPC UA type \\uamodel{MultiStateValueDiscreteType}\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[1], 2631),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTControlledVocabEventClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_504_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2144)
);
}

/* PartChangeClassType - ns=1;i=2259 */

static UA_StatusCode function_nodeset_505_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PartChangeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Service to change the part or product associated with a piece of equipment\\n      to a different part or product. Service to change the part or product\\n      associated with a piece of equipment to a different part or product. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2259),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PartChangeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_505_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2259)
);
}

/* CloseChuckClassType - ns=1;i=2256 */

static UA_StatusCode function_nodeset_506_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CloseChuckClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Service to close a chuck. Service to close a chuck.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2256),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CloseChuckClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_506_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2256)
);
}

/* CloseDoorClassType - ns=1;i=2250 */

static UA_StatusCode function_nodeset_507_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CloseDoorClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Service to close a door. Service to close a door.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2250),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CloseDoorClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_507_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2250)
);
}

/* OpenChuckClassType - ns=1;i=2253 */

static UA_StatusCode function_nodeset_508_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OpenChuckClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Service to open a chuck. Service to open a chuck.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2253),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OpenChuckClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_508_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2253)
);
}

/* AxisInterlockClassType - ns=1;i=2155 */

static UA_StatusCode function_nodeset_509_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisInterlockClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indicator of the state of the axis lockout function when power has been\\n      removed and the axis is allowed to move freely. An indicator of the state\\n      of the axis lockout function when power has been removed and the axis is\\n      allowed to move freely.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2155),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AxisInterlockClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_509_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2155)
);
}

/* AxisCouplingClassType - ns=1;i=2152 */

static UA_StatusCode function_nodeset_510_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisCouplingClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Describes the way the axes will be associated to each other. This is used\\n      in conjunction with \\mtmodel{COUPLED_AXES} to indicate the way they are\\n      interacting. The coupling MUST be viewed from the perspective of a\\n      specific axis. Therefore, a \\mtmodel{MASTER} coupling indicates that this\\n      axis is the master for the \\mtmodel{COUPLED_AXES}. Describes the way the\\n      axes will be associated to each other. This is used in conjunction with\\n      coupleda" "xes event to indicate the way they are interacting.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2152),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AxisCouplingClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_510_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2152)
);
}

/* EnumStrings - ns=1;i=2961 */

static UA_StatusCode function_nodeset_511_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2961_variant_DataContents[4];
variablenode_ns_1_i_2961_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "MASTER");
variablenode_ns_1_i_2961_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "SLAVE");
variablenode_ns_1_i_2961_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "SYNCHRONOUS");
variablenode_ns_1_i_2961_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "TANDEM");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2961_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2961),
UA_NODEID_NUMERIC(ns[1], 2199),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2961), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2961), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2152), false);
return retVal;
}

static UA_StatusCode function_nodeset_511_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2961)
);
}

/* AxisStateClassType - ns=1;i=2158 */

static UA_StatusCode function_nodeset_512_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisStateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indicator of the controlled state of a \\mtmodel{LINEAR} or\\n      \\mtmodel{ROTARY} component representing an axis. An indicator of the\\n      controlled state of a linear or rotary component representing an axis.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2158),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AxisStateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_512_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2158)
);
}

/* EnumStrings - ns=1;i=2967 */

static UA_StatusCode function_nodeset_513_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2967_variant_DataContents[4];
variablenode_ns_1_i_2967_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "HOME");
variablenode_ns_1_i_2967_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "PARKED");
variablenode_ns_1_i_2967_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "STOPPED");
variablenode_ns_1_i_2967_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "TRAVEL");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2967_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2967),
UA_NODEID_NUMERIC(ns[1], 2158),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2967), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2967), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2200), false);
return retVal;
}

static UA_StatusCode function_nodeset_513_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2967)
);
}

/* MaterialChangeClassType - ns=1;i=2235 */

static UA_StatusCode function_nodeset_514_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialChangeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Service to change the type of material or product being loaded or fed to a\\n      piece of equipment. Service to change the type of material or product\\n      being loaded or fed to a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2235),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialChangeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_514_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2235)
);
}

/* EquipmentModeClassType - ns=1;i=2191 */

static UA_StatusCode function_nodeset_515_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentModeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication that a piece of equipment, or a sub-part of a piece of\\n      equipment, is performing specific types of activities. A \\gls{subType}\\n      MUST always be specified. An indication that a piece of equipment, or a\\n      sub-part of a piece of equipment, is performing specific types of\\n      activities.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2191),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EquipmentModeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_515_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2191)
);
}

/* PathModeClassType - ns=1;i=2215 */

static UA_StatusCode function_nodeset_516_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PathModeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Describes the operational relationship between a \\mtmodel{PATH}\\n      \\textit{Structural Element} and another \\mtmodel{PATH} \\textit{Structural\\n      Element} for pieces of equipment comprised of multiple logical groupings\\n      of controlled axes or other logical operations. Describes the operational\\n      relationship between a path structural element and another path structural\\n      element for pieces of equipment comprised of multiple logical groupings of\\n      cont" "rolled axes or other logical operations.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2215),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PathModeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_516_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2215)
);
}

/* EnumStrings - ns=1;i=3033 */

static UA_StatusCode function_nodeset_517_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3033_variant_DataContents[4];
variablenode_ns_1_i_3033_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "INDEPENDENT");
variablenode_ns_1_i_3033_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "MASTER");
variablenode_ns_1_i_3033_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "MIRROR");
variablenode_ns_1_i_3033_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "SYNCHRONOUS");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3033_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3033),
UA_NODEID_NUMERIC(ns[1], 2209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3033), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3033), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2215), false);
return retVal;
}

static UA_StatusCode function_nodeset_517_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3033)
);
}

/* DirectionClassType - ns=1;i=2179 */

static UA_StatusCode function_nodeset_518_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DirectionClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The direction of motion. A \\gls{subType} MUST always be specified. The\\n      direction of motion.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2179),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DirectionClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_518_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2179)
);
}

/* EnumStrings - ns=1;i=2985 */

static UA_StatusCode function_nodeset_519_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2985_variant_DataContents[4];
variablenode_ns_1_i_2985_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "CLOCKWISE");
variablenode_ns_1_i_2985_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "COUNTER_CLOCKWISE");
variablenode_ns_1_i_2985_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "NEGATIVE");
variablenode_ns_1_i_2985_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "POSITIVE");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2985_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2985),
UA_NODEID_NUMERIC(ns[1], 2179),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2985), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2205), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2985), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_519_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2985)
);
}

/* MaterialFeedClassType - ns=1;i=2231 */

static UA_StatusCode function_nodeset_520_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialFeedClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Service to advance material or feed product to a piece of equipment from a\\n      continuous or bulk source. Service to advance material or feed product to\\n      a piece of equipment from a continuous or bulk source. \\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2231),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialFeedClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_520_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2231)
);
}

/* PowerStateClassType - ns=1;i=2218 */

static UA_StatusCode function_nodeset_521_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerStateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The indication of the status of the source of energy for a\\n      \\textit{Structural Element} to allow it to perform its intended function\\n      or the state of an enabling signal providing permission for the\\n      \\textit{Structural Element} to perform its functions. DEPRECATION WARNING:\\n      \\texttt{PowerState} may be deprecated in the future. The indication of the\\n      status of the source of energy for a structural element to allow it to\\n      perform its intended fu" "nction or the state of an enabling signal providing\\n      permission for the structural element to perform its functions.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2218),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PowerStateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_521_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2218)
);
}

/* ProgramEditClassType - ns=1;i=2221 */

static UA_StatusCode function_nodeset_522_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramEditClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the status of the \\mtmodel{Controller} component’s\\n      program editing mode. On many controls, a program can be edited while\\n      another program is currently being executed. An indication of the status\\n      of the controller components program editing mode. On many controls, a\\n      program can be edited while another program is currently being executed.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2221),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ProgramEditClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_522_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2221)
);
}

/* EnumStrings - ns=1;i=3039 */

static UA_StatusCode function_nodeset_523_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3039_variant_DataContents[3];
variablenode_ns_1_i_3039_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "ACTIVE");
variablenode_ns_1_i_3039_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "NOT_READY");
variablenode_ns_1_i_3039_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "READY");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3039_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3039),
UA_NODEID_NUMERIC(ns[1], 2210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3039), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2221), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3039), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_523_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3039)
);
}

/* ExecutionClassType - ns=1;i=2170 */

static UA_StatusCode function_nodeset_524_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecutionClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The execution status of the \\mtmodel{Controller} or \\mtmodel{Path}. The\\n      execution status of the controller.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2170),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ExecutionClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_524_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2170)
);
}

/* EnumStrings - ns=1;i=2997 */

static UA_StatusCode function_nodeset_525_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2997_variant_DataContents[8];
variablenode_ns_1_i_2997_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "ACTIVE");
variablenode_ns_1_i_2997_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "FEED_HOLD");
variablenode_ns_1_i_2997_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "INTERRUPTED");
variablenode_ns_1_i_2997_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "OPTIONAL_STOP");
variablenode_ns_1_i_2997_variant_DataContents[4] = UA_LOCALIZEDTEXT("en", "READY");
variablenode_ns_1_i_2997_variant_DataContents[5] = UA_LOCALIZEDTEXT("en", "PROGRAM_COMPLETED");
variablenode_ns_1_i_2997_variant_DataContents[6] = UA_LOCALIZEDTEXT("en", "PROGRAM_STOPPED");
variablenode_ns_1_i_2997_variant_DataContents[7] = UA_LOCALIZEDTEXT("en", "STOPPED");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2997_variant_DataContents, (UA_Int32) 8, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2997),
UA_NODEID_NUMERIC(ns[1], 2170),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2997), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2997), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2262), false);
return retVal;
}

static UA_StatusCode function_nodeset_525_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2997)
);
}

/* MaterialRetractClassType - ns=1;i=2238 */

static UA_StatusCode function_nodeset_526_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialRetractClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Service to remove or retract material or product. Service to remove or\\n      retract material or product.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2238),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialRetractClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_526_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2238)
);
}

/* FunctionalModeClassType - ns=1;i=2194 */

static UA_StatusCode function_nodeset_527_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FunctionalModeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The current intended production status of the device or component.\\n      Typically, the \\texttt{FUNCTIONAL_MODE} SHOULD be modeled as a data item\\n      for the Device element, but MAY be modeled for any Structural Element in\\n      the XML document. The current intended production status of the device or\\n      component.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2194),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "FunctionalModeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_527_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2194)
);
}

/* EnumStrings - ns=1;i=3003 */

static UA_StatusCode function_nodeset_528_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3003_variant_DataContents[5];
variablenode_ns_1_i_3003_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "MAINTENANCE");
variablenode_ns_1_i_3003_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "PRODUCTION");
variablenode_ns_1_i_3003_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "PROCESS_DEVELOPMENT");
variablenode_ns_1_i_3003_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "SETUP");
variablenode_ns_1_i_3003_variant_DataContents[4] = UA_LOCALIZEDTEXT("en", "TEARDOWN");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3003_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3003),
UA_NODEID_NUMERIC(ns[1], 2208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3003), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2194), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3003), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_528_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3003)
);
}

/* OpenDoorClassType - ns=1;i=2247 */

static UA_StatusCode function_nodeset_529_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OpenDoorClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Service to open a door. Service to open a door.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2247),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OpenDoorClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_529_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2247)
);
}

/* MaterialUnloadClassType - ns=1;i=2244 */

static UA_StatusCode function_nodeset_530_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialUnloadClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Service to unload a piece of material or product. Service to unload a\\n      piece of material or product.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2244),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialUnloadClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_530_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2244)
);
}

/* RotaryModeClassType - ns=1;i=2224 */

static UA_StatusCode function_nodeset_531_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RotaryModeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The current operating mode for a \\mtmodel{Rotary} type axis. The current\\n      operating mode for a rotary type axis.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2224),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RotaryModeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_531_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2224)
);
}

/* EnumStrings - ns=1;i=3045 */

static UA_StatusCode function_nodeset_532_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3045_variant_DataContents[3];
variablenode_ns_1_i_3045_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "CONTOUR");
variablenode_ns_1_i_3045_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "INDEX");
variablenode_ns_1_i_3045_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "SPINDLE");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3045_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3045),
UA_NODEID_NUMERIC(ns[1], 2211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3045), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3045), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2224), false);
return retVal;
}

static UA_StatusCode function_nodeset_532_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3045)
);
}

/* InterfaceStateClassType - ns=1;i=2227 */

static UA_StatusCode function_nodeset_533_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceStateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The current functional or operational state of an Interface type element\\n      indicating whether the Interface is active or not currently functioning.\\n      An indication of the operational state of an interface component\\n      component.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2227),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "InterfaceStateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_533_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2227)
);
}

/* EnumStrings - ns=1;i=3015 */

static UA_StatusCode function_nodeset_534_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3015_variant_DataContents[2];
variablenode_ns_1_i_3015_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "DISABLED");
variablenode_ns_1_i_3015_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "ENABLED");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3015_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3015),
UA_NODEID_NUMERIC(ns[1], 2227),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3015), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3015), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2230), false);
return retVal;
}

static UA_StatusCode function_nodeset_534_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3015)
);
}

/* SpindleInterlockClassType - ns=1;i=2212 */

static UA_StatusCode function_nodeset_535_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleInterlockClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the status of the spindle for a piece of equipment when\\n      power has been removed and it is free to rotate. An indication of the\\n      status of the spindle for a piece of equipment when power has been removed\\n      and it is free to rotate.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2212),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "SpindleInterlockClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_535_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2212)
);
}

/* MaterialLoadClassType - ns=1;i=2241 */

static UA_StatusCode function_nodeset_536_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialLoadClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Service to load a piece of material or product. Service to load a piece of\\n      material or product.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2241),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialLoadClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_536_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2241)
);
}

/* EnumStrings - ns=1;i=3009 */

static UA_StatusCode function_nodeset_537_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3009_variant_DataContents[5];
variablenode_ns_1_i_3009_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "ACTIVE");
variablenode_ns_1_i_3009_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "COMPLETE");
variablenode_ns_1_i_3009_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "FAIL");
variablenode_ns_1_i_3009_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "NOT_READY");
variablenode_ns_1_i_3009_variant_DataContents[4] = UA_LOCALIZEDTEXT("en", "READY");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3009_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3009),
UA_NODEID_NUMERIC(ns[1], 2256),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2244), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2247), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2241), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2253), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2250), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2259), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2234), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2235), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2231), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3009), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2238), false);
return retVal;
}

static UA_StatusCode function_nodeset_537_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3009)
);
}

/* ControllerModeOverrideClassType - ns=1;i=2176 */

static UA_StatusCode function_nodeset_538_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerModeOverrideClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A setting or operator selection that changes the behavior of a piece of\\n      equipment. A setting or operator selection that changes the behavior of a\\n      piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2176),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ControllerModeOverrideClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_538_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2176)
);
}

/* EnumStrings - ns=1;i=3021 */

static UA_StatusCode function_nodeset_539_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3021_variant_DataContents[2];
variablenode_ns_1_i_3021_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "OFF");
variablenode_ns_1_i_3021_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "ON");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3021_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3021),
UA_NODEID_NUMERIC(ns[1], 2218),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3021), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3021), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2204), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3021), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2191), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3021), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2176), false);
return retVal;
}

static UA_StatusCode function_nodeset_539_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3021)
);
}

/* ActuatorStateClassType - ns=1;i=2146 */

static UA_StatusCode function_nodeset_540_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ActuatorStateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the operational state of an apparatus for moving or\\n      controlling. Represents the operational state of an apparatus for moving\\n      or controlling a mechanism or system.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2146),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ActuatorStateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_540_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2146)
);
}

/* AvailabilityClassType - ns=1;i=2149 */

static UA_StatusCode function_nodeset_541_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AvailabilityClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      Represents the Agent's ability to communicate with the data source.\\n      This MUST be provided for a Device Element and MAY be provided for any\\n      other Structural Element. Represents the agent's ability to\\n      communicate with the data source.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2149),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AvailabilityClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_541_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2149)
);
}

/* EnumStrings - ns=1;i=2955 */

static UA_StatusCode function_nodeset_542_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2955_variant_DataContents[2];
variablenode_ns_1_i_2955_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "AVAILABLE");
variablenode_ns_1_i_2955_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "UNAVAILABLE");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2955_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2955),
UA_NODEID_NUMERIC(ns[1], 2149),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2955), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2955), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2198), false);
return retVal;
}

static UA_StatusCode function_nodeset_542_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2955)
);
}

/* DoorStateClassType - ns=1;i=2182 */

static UA_StatusCode function_nodeset_543_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DoorStateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The opened or closed state of the door. The operational state of a door\\n      type component or composition element.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2182),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DoorStateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_543_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2182)
);
}

/* EmergencyStopClassType - ns=1;i=2185 */

static UA_StatusCode function_nodeset_544_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStopClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The current state of the emergency stop signal. The current state of the\\n      emergency stop signal for a piece of equipment, controller path, or any\\n      other component or subsystem of a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2185),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EmergencyStopClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_544_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2185)
);
}

/* EnumStrings - ns=1;i=2991 */

static UA_StatusCode function_nodeset_545_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2991_variant_DataContents[2];
variablenode_ns_1_i_2991_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "ARMED");
variablenode_ns_1_i_2991_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "TRIGGERED");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2991_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2991),
UA_NODEID_NUMERIC(ns[1], 2185),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2991), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2207), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2991), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_545_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2991)
);
}

/* EndOfBarClassType - ns=1;i=2188 */

static UA_StatusCode function_nodeset_546_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EndOfBarClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of whether the end of a piece of bar stock being feed by a\\n      bar feeder has been reached. An indication of whether the end of a piece\\n      of bar stock being feed by a bar feeder has been reached.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2188),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EndOfBarClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_546_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2188)
);
}

/* EnumStrings - ns=1;i=3051 */

static UA_StatusCode function_nodeset_547_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3051_variant_DataContents[2];
variablenode_ns_1_i_3051_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "NO");
variablenode_ns_1_i_3051_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "YES");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3051_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3051),
UA_NODEID_NUMERIC(ns[1], 2206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3051), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3051), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2188), false);
return retVal;
}

static UA_StatusCode function_nodeset_547_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3051)
);
}

/* ChuckInterlockClassType - ns=1;i=2161 */

static UA_StatusCode function_nodeset_548_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ChuckInterlockClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the state of an interlock function or control logic state\\n      intended to prevent the associated \\mtmodel{Chuck} composition or function\\n      from being operated. An indication of the state of an interlock function\\n      or control logic state intended to prevent the associated chuck component\\n      from being operated.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2161),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ChuckInterlockClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_548_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2161)
);
}

/* EnumStrings - ns=1;i=2949 */

static UA_StatusCode function_nodeset_549_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2949_variant_DataContents[2];
variablenode_ns_1_i_2949_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "ACTIVE");
variablenode_ns_1_i_2949_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "INACTIVE");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2949_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2949),
UA_NODEID_NUMERIC(ns[1], 2161),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2949), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2197), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2949), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2146), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2949), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2155), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2949), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2212), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2949), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_549_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2949)
);
}

/* ControllerModeClassType - ns=1;i=2167 */

static UA_StatusCode function_nodeset_550_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerModeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The current mode of the \\mtmodel{Controller} component. The current\\n      operating mode of the controller component.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2167),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ControllerModeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_550_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2167)
);
}

/* EnumStrings - ns=1;i=2979 */

static UA_StatusCode function_nodeset_551_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2979_variant_DataContents[5];
variablenode_ns_1_i_2979_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "AUTOMATIC");
variablenode_ns_1_i_2979_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "EDIT");
variablenode_ns_1_i_2979_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "MANUAL");
variablenode_ns_1_i_2979_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "MANUAL_DATA_INPUT");
variablenode_ns_1_i_2979_variant_DataContents[4] = UA_LOCALIZEDTEXT("en", "SEMI_AUTOMATIC");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2979_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2979),
UA_NODEID_NUMERIC(ns[1], 2167),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2979), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2203), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2979), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_551_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2979)
);
}

/* CompositionStateClassType - ns=1;i=2173 */

static UA_StatusCode function_nodeset_552_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CompositionStateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the operating condition of a mechanism represented by a\\n      \\mtmodel{Composition} type element. A \\gls{subType} MUST always be\\n      specified. A \\mtmodel{compositionId} MUST always be specified. An\\n      indication of the operating condition of a mechanism represented by a\\n      composition type element.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2173),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CompositionStateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_552_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2173)
);
}

/* EnumStrings - ns=1;i=2973 */

static UA_StatusCode function_nodeset_553_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_2973_variant_DataContents[12];
variablenode_ns_1_i_2973_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "ACTIVE");
variablenode_ns_1_i_2973_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "CLOSED");
variablenode_ns_1_i_2973_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "DOWN");
variablenode_ns_1_i_2973_variant_DataContents[3] = UA_LOCALIZEDTEXT("en", "INACTIVE");
variablenode_ns_1_i_2973_variant_DataContents[4] = UA_LOCALIZEDTEXT("en", "LEFT");
variablenode_ns_1_i_2973_variant_DataContents[5] = UA_LOCALIZEDTEXT("en", "OFF");
variablenode_ns_1_i_2973_variant_DataContents[6] = UA_LOCALIZEDTEXT("en", "ON");
variablenode_ns_1_i_2973_variant_DataContents[7] = UA_LOCALIZEDTEXT("en", "OPEN");
variablenode_ns_1_i_2973_variant_DataContents[8] = UA_LOCALIZEDTEXT("en", "RIGHT");
variablenode_ns_1_i_2973_variant_DataContents[9] = UA_LOCALIZEDTEXT("en", "TRANSITIONING");
variablenode_ns_1_i_2973_variant_DataContents[10] = UA_LOCALIZEDTEXT("en", "UNLATCHED");
variablenode_ns_1_i_2973_variant_DataContents[11] = UA_LOCALIZEDTEXT("en", "UP");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_2973_variant_DataContents, (UA_Int32) 12, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2973),
UA_NODEID_NUMERIC(ns[1], 2202),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2973), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2973), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2173), false);
return retVal;
}

static UA_StatusCode function_nodeset_553_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2973)
);
}

/* ChuckStateClassType - ns=1;i=2164 */

static UA_StatusCode function_nodeset_554_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ChuckStateClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      An indication of the operating state of a mechanism that holds a part or\\n      stock material during a manufacturing process. It may also represent a\\n      mechanism that holds any other mechanism in place within a piece of\\n      equipment. An indication of the operating state of a mechanism that holds\\n      a part or stock material during a manufacturing process. It may also\\n      represent a mechanism that holds any other mechanism in place within a\\n      piece of equipmen" "t.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2164),
UA_NODEID_NUMERIC(ns[1], 2144),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ChuckStateClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_554_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2164)
);
}

/* EnumStrings - ns=1;i=3027 */

static UA_StatusCode function_nodeset_555_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_3027_variant_DataContents[3];
variablenode_ns_1_i_3027_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "CLOSED");
variablenode_ns_1_i_3027_variant_DataContents[1] = UA_LOCALIZEDTEXT("en", "OPEN");
variablenode_ns_1_i_3027_variant_DataContents[2] = UA_LOCALIZEDTEXT("en", "UNLATCHED");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_3027_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3027),
UA_NODEID_NUMERIC(ns[1], 2164),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3027), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3027), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2182), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 3027), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[1], 2201), false);
return retVal;
}

static UA_StatusCode function_nodeset_555_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3027)
);
}

/* MTNumericEventClassType - ns=1;i=2359 */

static UA_StatusCode function_nodeset_556_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTNumericEventClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The root type for all of the event types that have numeric \\gls{CDATA}.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2359),
UA_NODEID_NUMERIC(ns[1], 2631),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTNumericEventClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_556_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2359)
);
}

/* HardnessClassType - ns=1;i=2351 */

static UA_StatusCode function_nodeset_557_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HardnessClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The measurement of the hardness of a material. The measurement does not\\n      provide a unit. A \\gls{subType} MUST always be specified to designate the\\n      hardness scale associated with the measurement. The measurement of the\\n      hardness of a material.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2351),
UA_NODEID_NUMERIC(ns[1], 2359),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HardnessClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_557_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2351)
);
}

/* LineNumberClassType - ns=1;i=2353 */

static UA_StatusCode function_nodeset_558_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LineNumberClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A reference to the position of a block of program code within a control\\n      program. The line number MAY represent either an absolute position\\n      starting with the first line of the program or an incremental position\\n      relative to the occurrence of the last \\mtmodel{LINE_LABEL}.\\n      \\mtmodel{LINE_NUMBER} does not change subject to any looping or branching\\n      in a control program. A \\gls{subType} MUST be defined. A reference to the\\n      position of a block o" "f program code within a control program.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2353),
UA_NODEID_NUMERIC(ns[1], 2359),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LineNumberClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_558_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2353)
);
}

/* PartCountClassType - ns=1;i=2355 */

static UA_StatusCode function_nodeset_559_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PartCountClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The current count of parts produced as represented by the Controller. The\\n      valid data value MUST be an integer value. The count of parts produced.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2355),
UA_NODEID_NUMERIC(ns[1], 2359),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PartCountClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_559_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2355)
);
}

/* BlockCountClassType - ns=1;i=2349 */

static UA_StatusCode function_nodeset_560_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BlockCountClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The total count of the number of blocks of program code that have been\\n      executed since execution started. \\mtmodel{BLOCK_COUNT} counts blocks of\\n      program code executed regardless of program structure (e.g., looping or\\n      branching within the program). The starting value for\\n      \\mtmodel{BLOCK_COUNT} MAY be established by an initial value provided in\\n      the Constraint element defined for the data item. The total count of the\\n      number of blocks of progr" "am code that have been executed since execution\\n      started.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2349),
UA_NODEID_NUMERIC(ns[1], 2359),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "BlockCountClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_560_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2349)
);
}

/* RotaryVelocityOverrideClassType - ns=1;i=2357 */

static UA_StatusCode function_nodeset_561_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RotaryVelocityOverrideClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      A command issued to adjust the programmed velocity for a Rotary type axis.\\n      This command represents a percentage change to the velocity calculated by\\n      a logic or motion program or set by a switch for a Rotary type axis.\\n      \\mtmodel{ROTARY_VELOCITY_OVERRIDE} is expressed as a percentage of the\\n      programmed \\mtmodel{ROTARY_VELOCITY}. The value of a command issued to\\n      adjust the programmed velocity for a rotary type axis. This command\\n      represents a " "percentage change to the velocity calculated by a logic or\\n      motion program or set by a switch for a rotary type axis.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2357),
UA_NODEID_NUMERIC(ns[1], 2359),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "RotaryVelocityOverrideClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_561_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2357)
);
}

/* AxisFeedrateOverrideClassType - ns=1;i=2347 */

static UA_StatusCode function_nodeset_562_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisFeedrateOverrideClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The value of a signal or calculation issued to adjust the feedrate of an\\n      individual linear type axis. The value provided for\\n      \\mtmodel{AXIS_FEEDRATE_OVERRIDE} is expressed as a percentage of the\\n      designated feedrate for the axis. When \\mtmodel{AXIS_FEEDRATE_OVERRIDE} is\\n      applied, the resulting commanded feedrate for the axis is limited to the\\n      value of the original feedrate multiplied by the value of the\\n      \\mtmodel{AXIS_FEEDRATE_OVERRIDE}. Th" "ere MAY be different subtypes of\\n      \\mtmodel{AXIS_FEEDRATE_OVERRIDE}; each representing an override value for\\n      a designated subtype of feedrate depending on the state of operation of\\n      the axis. The subtypes of operation of an axis are currently defined as\\n      \\mtmodel{PROGRAMMED}, \\mtmodel{JOG}, and \\mtmodel{RAPID}. The value of a\\n      signal or calculation issued to adjust the feedrate of an individual\\n      linear type axis.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2347),
UA_NODEID_NUMERIC(ns[1], 2359),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AxisFeedrateOverrideClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_562_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2347)
);
}

/* PathFeedrateOverrideClassType - ns=1;i=3628 */

static UA_StatusCode function_nodeset_563_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PathFeedrateOverrideClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       The value of a signal or calculation issued to adjust the feedrate for\\n      the axes associated with a path component that may represent a single axis\\n      or the coordinated movement of multiple axes.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 3628),
UA_NODEID_NUMERIC(ns[1], 2359),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PathFeedrateOverrideClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_563_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3628)
);
}

/* MTMessageClassType - ns=1;i=2427 */

static UA_StatusCode function_nodeset_564_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTMessageClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       Any text string of information to be transferred from a piece of\\n      equipment to a client software application.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2427),
UA_NODEID_NUMERIC(ns[1], 2631),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTMessageClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_564_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2427)
);
}

/* MTConditionClassType - ns=1;i=2629 */

static UA_StatusCode function_nodeset_565_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MTConditionClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The abstract type for all data items types that are specifically for\\n      \\mtmodel{CONDITION} \\gls{category}. An XML element which provides the\\n      information and data reported from a piece of equipment for those dataitem\\n      elements defined with a category attribute of condition category in the\\n      mtconnectdevices document.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2629),
UA_NODEID_NUMERIC(ns[1], 2425),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTConditionClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_565_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2629)
);
}

/* HardwareClassType - ns=1;i=2419 */

static UA_StatusCode function_nodeset_566_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       An indication of a fault associated with the hardware subsystem of the\\n      structural element.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2419),
UA_NODEID_NUMERIC(ns[1], 2629),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HardwareClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_566_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2419)
);
}

/* CommunicationsClassType - ns=1;i=2413 */

static UA_StatusCode function_nodeset_567_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CommunicationsClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       An indication that the piece of equipment has experienced a\\n      communications failure.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2413),
UA_NODEID_NUMERIC(ns[1], 2629),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CommunicationsClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_567_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2413)
);
}

/* ActuatorClassType - ns=1;i=2411 */

static UA_StatusCode function_nodeset_568_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ActuatorClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       Redefined as a piece of equipment with the ability to be represented as a\\n      lower level component of a parent component element or as a composition\\n      element. See actuator type\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2411),
UA_NODEID_NUMERIC(ns[1], 2629),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ActuatorClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_568_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2411)
);
}

/* LogicProgramClassType - ns=1;i=2417 */

static UA_StatusCode function_nodeset_569_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LogicProgramClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       An indication that an error occurred in the logic program or programmable\\n      logic controller (PLC) associated with a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2417),
UA_NODEID_NUMERIC(ns[1], 2629),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LogicProgramClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_569_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2417)
);
}

/* DataRangeClassType - ns=1;i=2415 */

static UA_StatusCode function_nodeset_570_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataRangeClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       An indication that the value of the data associated with a measured value\\n      or a calculation is outside of an expected range.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2415),
UA_NODEID_NUMERIC(ns[1], 2629),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DataRangeClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_570_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2415)
);
}

/* SystemClassType - ns=1;i=2423 */

static UA_StatusCode function_nodeset_571_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SystemClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       A general purpose indication associated with an electronic component of a\\n      piece of equipment or a controller that represents a fault that is not\\n      associated with the operator, program, or hardware.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2423),
UA_NODEID_NUMERIC(ns[1], 2629),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "SystemClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_571_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2423)
);
}

/* MotionProgramClassType - ns=1;i=2421 */

static UA_StatusCode function_nodeset_572_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProgramClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n       An indication that an error occurred in the motion program associated\\n      with a piece of equipment.\\n");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2421),
UA_NODEID_NUMERIC(ns[1], 2629),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MotionProgramClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_572_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2421)
);
}

/* MTCompositionType - ns=1;i=2067 */

static UA_StatusCode function_nodeset_573_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTCompositionType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The \\mtmodel{MTCompositionType} represents all composition entities. The\\n      specification of how to form the \\gls{BrowseName} is specified in\\n      Section~\\ref{sec:browse-name-rules}. The data items are added to the\\n      relationship where the \\gls{MTDataItem} to \\gls{Composition} relationship\\n      is represented by the \\gls{BrowseName} Composition property of the data\\n      item. The data items are added to the \\gls{Composition} by their\\n      \\glspl{BrowseNam" "e}. An XML element used to describe the lowest level\\n      structural building blocks contained within a component element.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 2067),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MTCompositionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_nodeset_573_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2067)
);
}

/* Uuid - ns=1;i=2070 */

static UA_StatusCode function_nodeset_574_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Uuid");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The \\mtmodel{MTCompositionType} represents all composition entities. The\\n      specification of how to form the \\gls{BrowseName} is specified in\\n      Section~\\ref{sec:browse-name-rules}. The data items are added to the\\n      relationship where the \\gls{MTDataItem} to \\gls{Composition} relationship\\n      is represented by the \\gls{BrowseName} Composition property of the data\\n      item. The data items are added to the \\gls{Composition} by their\\n      \\glspl{BrowseNam" "e}. An XML element used to describe the lowest level\\n      structural building blocks contained within a component element.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2070),
UA_NODEID_NUMERIC(ns[1], 2067),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Uuid"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2070), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_574_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2070)
);
}

/* Name - ns=1;i=2071 */

static UA_StatusCode function_nodeset_575_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The \\mtmodel{MTCompositionType} represents all composition entities. The\\n      specification of how to form the \\gls{BrowseName} is specified in\\n      Section~\\ref{sec:browse-name-rules}. The data items are added to the\\n      relationship where the \\gls{MTDataItem} to \\gls{Composition} relationship\\n      is represented by the \\gls{BrowseName} Composition property of the data\\n      item. The data items are added to the \\gls{Composition} by their\\n      \\glspl{BrowseNam" "e}. An XML element used to describe the lowest level\\n      structural building blocks contained within a component element.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2071),
UA_NODEID_NUMERIC(ns[1], 2067),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2071), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_nodeset_575_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2071)
);
}

/* MTTypeName - ns=1;i=2069 */

static UA_StatusCode function_nodeset_576_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MTTypeName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The \\mtmodel{MTCompositionType} represents all composition entities. The\\n      specification of how to form the \\gls{BrowseName} is specified in\\n      Section~\\ref{sec:browse-name-rules}. The data items are added to the\\n      relationship where the \\gls{MTDataItem} to \\gls{Composition} relationship\\n      is represented by the \\gls{BrowseName} Composition property of the data\\n      item. The data items are added to the \\gls{Composition} by their\\n      \\glspl{BrowseNam" "e}. An XML element used to describe the lowest level\\n      structural building blocks contained within a component element.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2069),
UA_NODEID_NUMERIC(ns[1], 2067),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "MTTypeName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2069), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_576_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2069)
);
}

/* XmlId - ns=1;i=2068 */

static UA_StatusCode function_nodeset_577_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "XmlId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "\\n      The \\mtmodel{MTCompositionType} represents all composition entities. The\\n      specification of how to form the \\gls{BrowseName} is specified in\\n      Section~\\ref{sec:browse-name-rules}. The data items are added to the\\n      relationship where the \\gls{MTDataItem} to \\gls{Composition} relationship\\n      is represented by the \\gls{BrowseName} Composition property of the data\\n      item. The data items are added to the \\gls{Composition} by their\\n      \\glspl{BrowseNam" "e}. An XML element used to describe the lowest level\\n      structural building blocks contained within a component element.\\n" );
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2068),
UA_NODEID_NUMERIC(ns[1], 2067),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "XmlId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2068), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_nodeset_577_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2068)
);
}

UA_StatusCode nodeset(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/MTConnect/v2/");
bool dummy = (
!(retVal = function_nodeset_0_begin(server, ns)) &&
!(retVal = function_nodeset_1_begin(server, ns)) &&
!(retVal = function_nodeset_2_begin(server, ns)) &&
!(retVal = function_nodeset_3_begin(server, ns)) &&
!(retVal = function_nodeset_4_begin(server, ns)) &&
!(retVal = function_nodeset_5_begin(server, ns)) &&
!(retVal = function_nodeset_6_begin(server, ns)) &&
!(retVal = function_nodeset_7_begin(server, ns)) &&
!(retVal = function_nodeset_8_begin(server, ns)) &&
!(retVal = function_nodeset_9_begin(server, ns)) &&
!(retVal = function_nodeset_10_begin(server, ns)) &&
!(retVal = function_nodeset_11_begin(server, ns)) &&
!(retVal = function_nodeset_12_begin(server, ns)) &&
!(retVal = function_nodeset_13_begin(server, ns)) &&
!(retVal = function_nodeset_14_begin(server, ns)) &&
!(retVal = function_nodeset_15_begin(server, ns)) &&
!(retVal = function_nodeset_16_begin(server, ns)) &&
!(retVal = function_nodeset_17_begin(server, ns)) &&
!(retVal = function_nodeset_18_begin(server, ns)) &&
!(retVal = function_nodeset_19_begin(server, ns)) &&
!(retVal = function_nodeset_20_begin(server, ns)) &&
!(retVal = function_nodeset_21_begin(server, ns)) &&
!(retVal = function_nodeset_22_begin(server, ns)) &&
!(retVal = function_nodeset_23_begin(server, ns)) &&
!(retVal = function_nodeset_24_begin(server, ns)) &&
!(retVal = function_nodeset_25_begin(server, ns)) &&
!(retVal = function_nodeset_26_begin(server, ns)) &&
!(retVal = function_nodeset_27_begin(server, ns)) &&
!(retVal = function_nodeset_28_begin(server, ns)) &&
!(retVal = function_nodeset_29_begin(server, ns)) &&
!(retVal = function_nodeset_30_begin(server, ns)) &&
!(retVal = function_nodeset_31_begin(server, ns)) &&
!(retVal = function_nodeset_32_begin(server, ns)) &&
!(retVal = function_nodeset_33_begin(server, ns)) &&
!(retVal = function_nodeset_34_begin(server, ns)) &&
!(retVal = function_nodeset_35_begin(server, ns)) &&
!(retVal = function_nodeset_36_begin(server, ns)) &&
!(retVal = function_nodeset_37_begin(server, ns)) &&
!(retVal = function_nodeset_38_begin(server, ns)) &&
!(retVal = function_nodeset_39_begin(server, ns)) &&
!(retVal = function_nodeset_40_begin(server, ns)) &&
!(retVal = function_nodeset_41_begin(server, ns)) &&
!(retVal = function_nodeset_42_begin(server, ns)) &&
!(retVal = function_nodeset_43_begin(server, ns)) &&
!(retVal = function_nodeset_44_begin(server, ns)) &&
!(retVal = function_nodeset_45_begin(server, ns)) &&
!(retVal = function_nodeset_46_begin(server, ns)) &&
!(retVal = function_nodeset_47_begin(server, ns)) &&
!(retVal = function_nodeset_48_begin(server, ns)) &&
!(retVal = function_nodeset_49_begin(server, ns)) &&
!(retVal = function_nodeset_50_begin(server, ns)) &&
!(retVal = function_nodeset_51_begin(server, ns)) &&
!(retVal = function_nodeset_52_begin(server, ns)) &&
!(retVal = function_nodeset_53_begin(server, ns)) &&
!(retVal = function_nodeset_54_begin(server, ns)) &&
!(retVal = function_nodeset_55_begin(server, ns)) &&
!(retVal = function_nodeset_56_begin(server, ns)) &&
!(retVal = function_nodeset_57_begin(server, ns)) &&
!(retVal = function_nodeset_58_begin(server, ns)) &&
!(retVal = function_nodeset_59_begin(server, ns)) &&
!(retVal = function_nodeset_60_begin(server, ns)) &&
!(retVal = function_nodeset_61_begin(server, ns)) &&
!(retVal = function_nodeset_62_begin(server, ns)) &&
!(retVal = function_nodeset_63_begin(server, ns)) &&
!(retVal = function_nodeset_64_begin(server, ns)) &&
!(retVal = function_nodeset_65_begin(server, ns)) &&
!(retVal = function_nodeset_66_begin(server, ns)) &&
!(retVal = function_nodeset_67_begin(server, ns)) &&
!(retVal = function_nodeset_68_begin(server, ns)) &&
!(retVal = function_nodeset_69_begin(server, ns)) &&
!(retVal = function_nodeset_70_begin(server, ns)) &&
!(retVal = function_nodeset_71_begin(server, ns)) &&
!(retVal = function_nodeset_72_begin(server, ns)) &&
!(retVal = function_nodeset_73_begin(server, ns)) &&
!(retVal = function_nodeset_74_begin(server, ns)) &&
!(retVal = function_nodeset_75_begin(server, ns)) &&
!(retVal = function_nodeset_76_begin(server, ns)) &&
!(retVal = function_nodeset_77_begin(server, ns)) &&
!(retVal = function_nodeset_78_begin(server, ns)) &&
!(retVal = function_nodeset_79_begin(server, ns)) &&
!(retVal = function_nodeset_80_begin(server, ns)) &&
!(retVal = function_nodeset_81_begin(server, ns)) &&
!(retVal = function_nodeset_82_begin(server, ns)) &&
!(retVal = function_nodeset_83_begin(server, ns)) &&
!(retVal = function_nodeset_84_begin(server, ns)) &&
!(retVal = function_nodeset_85_begin(server, ns)) &&
!(retVal = function_nodeset_86_begin(server, ns)) &&
!(retVal = function_nodeset_87_begin(server, ns)) &&
!(retVal = function_nodeset_88_begin(server, ns)) &&
!(retVal = function_nodeset_89_begin(server, ns)) &&
!(retVal = function_nodeset_90_begin(server, ns)) &&
!(retVal = function_nodeset_91_begin(server, ns)) &&
!(retVal = function_nodeset_92_begin(server, ns)) &&
!(retVal = function_nodeset_93_begin(server, ns)) &&
!(retVal = function_nodeset_94_begin(server, ns)) &&
!(retVal = function_nodeset_95_begin(server, ns)) &&
!(retVal = function_nodeset_96_begin(server, ns)) &&
!(retVal = function_nodeset_97_begin(server, ns)) &&
!(retVal = function_nodeset_98_begin(server, ns)) &&
!(retVal = function_nodeset_99_begin(server, ns)) &&
!(retVal = function_nodeset_100_begin(server, ns)) &&
!(retVal = function_nodeset_101_begin(server, ns)) &&
!(retVal = function_nodeset_102_begin(server, ns)) &&
!(retVal = function_nodeset_103_begin(server, ns)) &&
!(retVal = function_nodeset_104_begin(server, ns)) &&
!(retVal = function_nodeset_105_begin(server, ns)) &&
!(retVal = function_nodeset_106_begin(server, ns)) &&
!(retVal = function_nodeset_107_begin(server, ns)) &&
!(retVal = function_nodeset_108_begin(server, ns)) &&
!(retVal = function_nodeset_109_begin(server, ns)) &&
!(retVal = function_nodeset_110_begin(server, ns)) &&
!(retVal = function_nodeset_111_begin(server, ns)) &&
!(retVal = function_nodeset_112_begin(server, ns)) &&
!(retVal = function_nodeset_113_begin(server, ns)) &&
!(retVal = function_nodeset_114_begin(server, ns)) &&
!(retVal = function_nodeset_115_begin(server, ns)) &&
!(retVal = function_nodeset_116_begin(server, ns)) &&
!(retVal = function_nodeset_117_begin(server, ns)) &&
!(retVal = function_nodeset_118_begin(server, ns)) &&
!(retVal = function_nodeset_119_begin(server, ns)) &&
!(retVal = function_nodeset_120_begin(server, ns)) &&
!(retVal = function_nodeset_121_begin(server, ns)) &&
!(retVal = function_nodeset_122_begin(server, ns)) &&
!(retVal = function_nodeset_123_begin(server, ns)) &&
!(retVal = function_nodeset_124_begin(server, ns)) &&
!(retVal = function_nodeset_125_begin(server, ns)) &&
!(retVal = function_nodeset_126_begin(server, ns)) &&
!(retVal = function_nodeset_127_begin(server, ns)) &&
!(retVal = function_nodeset_128_begin(server, ns)) &&
!(retVal = function_nodeset_129_begin(server, ns)) &&
!(retVal = function_nodeset_130_begin(server, ns)) &&
!(retVal = function_nodeset_131_begin(server, ns)) &&
!(retVal = function_nodeset_132_begin(server, ns)) &&
!(retVal = function_nodeset_133_begin(server, ns)) &&
!(retVal = function_nodeset_134_begin(server, ns)) &&
!(retVal = function_nodeset_135_begin(server, ns)) &&
!(retVal = function_nodeset_136_begin(server, ns)) &&
!(retVal = function_nodeset_137_begin(server, ns)) &&
!(retVal = function_nodeset_138_begin(server, ns)) &&
!(retVal = function_nodeset_139_begin(server, ns)) &&
!(retVal = function_nodeset_140_begin(server, ns)) &&
!(retVal = function_nodeset_141_begin(server, ns)) &&
!(retVal = function_nodeset_142_begin(server, ns)) &&
!(retVal = function_nodeset_143_begin(server, ns)) &&
!(retVal = function_nodeset_144_begin(server, ns)) &&
!(retVal = function_nodeset_145_begin(server, ns)) &&
!(retVal = function_nodeset_146_begin(server, ns)) &&
!(retVal = function_nodeset_147_begin(server, ns)) &&
!(retVal = function_nodeset_148_begin(server, ns)) &&
!(retVal = function_nodeset_149_begin(server, ns)) &&
!(retVal = function_nodeset_150_begin(server, ns)) &&
!(retVal = function_nodeset_151_begin(server, ns)) &&
!(retVal = function_nodeset_152_begin(server, ns)) &&
!(retVal = function_nodeset_153_begin(server, ns)) &&
!(retVal = function_nodeset_154_begin(server, ns)) &&
!(retVal = function_nodeset_155_begin(server, ns)) &&
!(retVal = function_nodeset_156_begin(server, ns)) &&
!(retVal = function_nodeset_157_begin(server, ns)) &&
!(retVal = function_nodeset_158_begin(server, ns)) &&
!(retVal = function_nodeset_159_begin(server, ns)) &&
!(retVal = function_nodeset_160_begin(server, ns)) &&
!(retVal = function_nodeset_161_begin(server, ns)) &&
!(retVal = function_nodeset_162_begin(server, ns)) &&
!(retVal = function_nodeset_163_begin(server, ns)) &&
!(retVal = function_nodeset_164_begin(server, ns)) &&
!(retVal = function_nodeset_165_begin(server, ns)) &&
!(retVal = function_nodeset_166_begin(server, ns)) &&
!(retVal = function_nodeset_167_begin(server, ns)) &&
!(retVal = function_nodeset_168_begin(server, ns)) &&
!(retVal = function_nodeset_169_begin(server, ns)) &&
!(retVal = function_nodeset_170_begin(server, ns)) &&
!(retVal = function_nodeset_171_begin(server, ns)) &&
!(retVal = function_nodeset_172_begin(server, ns)) &&
!(retVal = function_nodeset_173_begin(server, ns)) &&
!(retVal = function_nodeset_174_begin(server, ns)) &&
!(retVal = function_nodeset_175_begin(server, ns)) &&
!(retVal = function_nodeset_176_begin(server, ns)) &&
!(retVal = function_nodeset_177_begin(server, ns)) &&
!(retVal = function_nodeset_178_begin(server, ns)) &&
!(retVal = function_nodeset_179_begin(server, ns)) &&
!(retVal = function_nodeset_180_begin(server, ns)) &&
!(retVal = function_nodeset_181_begin(server, ns)) &&
!(retVal = function_nodeset_182_begin(server, ns)) &&
!(retVal = function_nodeset_183_begin(server, ns)) &&
!(retVal = function_nodeset_184_begin(server, ns)) &&
!(retVal = function_nodeset_185_begin(server, ns)) &&
!(retVal = function_nodeset_186_begin(server, ns)) &&
!(retVal = function_nodeset_187_begin(server, ns)) &&
!(retVal = function_nodeset_188_begin(server, ns)) &&
!(retVal = function_nodeset_189_begin(server, ns)) &&
!(retVal = function_nodeset_190_begin(server, ns)) &&
!(retVal = function_nodeset_191_begin(server, ns)) &&
!(retVal = function_nodeset_192_begin(server, ns)) &&
!(retVal = function_nodeset_193_begin(server, ns)) &&
!(retVal = function_nodeset_194_begin(server, ns)) &&
!(retVal = function_nodeset_195_begin(server, ns)) &&
!(retVal = function_nodeset_196_begin(server, ns)) &&
!(retVal = function_nodeset_197_begin(server, ns)) &&
!(retVal = function_nodeset_198_begin(server, ns)) &&
!(retVal = function_nodeset_199_begin(server, ns)) &&
!(retVal = function_nodeset_200_begin(server, ns)) &&
!(retVal = function_nodeset_201_begin(server, ns)) &&
!(retVal = function_nodeset_202_begin(server, ns)) &&
!(retVal = function_nodeset_203_begin(server, ns)) &&
!(retVal = function_nodeset_204_begin(server, ns)) &&
!(retVal = function_nodeset_205_begin(server, ns)) &&
!(retVal = function_nodeset_206_begin(server, ns)) &&
!(retVal = function_nodeset_207_begin(server, ns)) &&
!(retVal = function_nodeset_208_begin(server, ns)) &&
!(retVal = function_nodeset_209_begin(server, ns)) &&
!(retVal = function_nodeset_210_begin(server, ns)) &&
!(retVal = function_nodeset_211_begin(server, ns)) &&
!(retVal = function_nodeset_212_begin(server, ns)) &&
!(retVal = function_nodeset_213_begin(server, ns)) &&
!(retVal = function_nodeset_214_begin(server, ns)) &&
!(retVal = function_nodeset_215_begin(server, ns)) &&
!(retVal = function_nodeset_216_begin(server, ns)) &&
!(retVal = function_nodeset_217_begin(server, ns)) &&
!(retVal = function_nodeset_218_begin(server, ns)) &&
!(retVal = function_nodeset_219_begin(server, ns)) &&
!(retVal = function_nodeset_220_begin(server, ns)) &&
!(retVal = function_nodeset_221_begin(server, ns)) &&
!(retVal = function_nodeset_222_begin(server, ns)) &&
!(retVal = function_nodeset_223_begin(server, ns)) &&
!(retVal = function_nodeset_224_begin(server, ns)) &&
!(retVal = function_nodeset_225_begin(server, ns)) &&
!(retVal = function_nodeset_226_begin(server, ns)) &&
!(retVal = function_nodeset_227_begin(server, ns)) &&
!(retVal = function_nodeset_228_begin(server, ns)) &&
!(retVal = function_nodeset_229_begin(server, ns)) &&
!(retVal = function_nodeset_230_begin(server, ns)) &&
!(retVal = function_nodeset_231_begin(server, ns)) &&
!(retVal = function_nodeset_232_begin(server, ns)) &&
!(retVal = function_nodeset_233_begin(server, ns)) &&
!(retVal = function_nodeset_234_begin(server, ns)) &&
!(retVal = function_nodeset_235_begin(server, ns)) &&
!(retVal = function_nodeset_236_begin(server, ns)) &&
!(retVal = function_nodeset_237_begin(server, ns)) &&
!(retVal = function_nodeset_238_begin(server, ns)) &&
!(retVal = function_nodeset_239_begin(server, ns)) &&
!(retVal = function_nodeset_240_begin(server, ns)) &&
!(retVal = function_nodeset_241_begin(server, ns)) &&
!(retVal = function_nodeset_242_begin(server, ns)) &&
!(retVal = function_nodeset_243_begin(server, ns)) &&
!(retVal = function_nodeset_244_begin(server, ns)) &&
!(retVal = function_nodeset_245_begin(server, ns)) &&
!(retVal = function_nodeset_246_begin(server, ns)) &&
!(retVal = function_nodeset_247_begin(server, ns)) &&
!(retVal = function_nodeset_248_begin(server, ns)) &&
!(retVal = function_nodeset_249_begin(server, ns)) &&
!(retVal = function_nodeset_250_begin(server, ns)) &&
!(retVal = function_nodeset_251_begin(server, ns)) &&
!(retVal = function_nodeset_252_begin(server, ns)) &&
!(retVal = function_nodeset_253_begin(server, ns)) &&
!(retVal = function_nodeset_254_begin(server, ns)) &&
!(retVal = function_nodeset_255_begin(server, ns)) &&
!(retVal = function_nodeset_256_begin(server, ns)) &&
!(retVal = function_nodeset_257_begin(server, ns)) &&
!(retVal = function_nodeset_258_begin(server, ns)) &&
!(retVal = function_nodeset_259_begin(server, ns)) &&
!(retVal = function_nodeset_260_begin(server, ns)) &&
!(retVal = function_nodeset_261_begin(server, ns)) &&
!(retVal = function_nodeset_262_begin(server, ns)) &&
!(retVal = function_nodeset_263_begin(server, ns)) &&
!(retVal = function_nodeset_264_begin(server, ns)) &&
!(retVal = function_nodeset_265_begin(server, ns)) &&
!(retVal = function_nodeset_266_begin(server, ns)) &&
!(retVal = function_nodeset_267_begin(server, ns)) &&
!(retVal = function_nodeset_268_begin(server, ns)) &&
!(retVal = function_nodeset_269_begin(server, ns)) &&
!(retVal = function_nodeset_270_begin(server, ns)) &&
!(retVal = function_nodeset_271_begin(server, ns)) &&
!(retVal = function_nodeset_272_begin(server, ns)) &&
!(retVal = function_nodeset_273_begin(server, ns)) &&
!(retVal = function_nodeset_274_begin(server, ns)) &&
!(retVal = function_nodeset_275_begin(server, ns)) &&
!(retVal = function_nodeset_276_begin(server, ns)) &&
!(retVal = function_nodeset_277_begin(server, ns)) &&
!(retVal = function_nodeset_278_begin(server, ns)) &&
!(retVal = function_nodeset_279_begin(server, ns)) &&
!(retVal = function_nodeset_280_begin(server, ns)) &&
!(retVal = function_nodeset_281_begin(server, ns)) &&
!(retVal = function_nodeset_282_begin(server, ns)) &&
!(retVal = function_nodeset_283_begin(server, ns)) &&
!(retVal = function_nodeset_284_begin(server, ns)) &&
!(retVal = function_nodeset_285_begin(server, ns)) &&
!(retVal = function_nodeset_286_begin(server, ns)) &&
!(retVal = function_nodeset_287_begin(server, ns)) &&
!(retVal = function_nodeset_288_begin(server, ns)) &&
!(retVal = function_nodeset_289_begin(server, ns)) &&
!(retVal = function_nodeset_290_begin(server, ns)) &&
!(retVal = function_nodeset_291_begin(server, ns)) &&
!(retVal = function_nodeset_292_begin(server, ns)) &&
!(retVal = function_nodeset_293_begin(server, ns)) &&
!(retVal = function_nodeset_294_begin(server, ns)) &&
!(retVal = function_nodeset_295_begin(server, ns)) &&
!(retVal = function_nodeset_296_begin(server, ns)) &&
!(retVal = function_nodeset_297_begin(server, ns)) &&
!(retVal = function_nodeset_298_begin(server, ns)) &&
!(retVal = function_nodeset_299_begin(server, ns)) &&
!(retVal = function_nodeset_300_begin(server, ns)) &&
!(retVal = function_nodeset_301_begin(server, ns)) &&
!(retVal = function_nodeset_302_begin(server, ns)) &&
!(retVal = function_nodeset_303_begin(server, ns)) &&
!(retVal = function_nodeset_304_begin(server, ns)) &&
!(retVal = function_nodeset_305_begin(server, ns)) &&
!(retVal = function_nodeset_306_begin(server, ns)) &&
!(retVal = function_nodeset_307_begin(server, ns)) &&
!(retVal = function_nodeset_308_begin(server, ns)) &&
!(retVal = function_nodeset_309_begin(server, ns)) &&
!(retVal = function_nodeset_310_begin(server, ns)) &&
!(retVal = function_nodeset_311_begin(server, ns)) &&
!(retVal = function_nodeset_312_begin(server, ns)) &&
!(retVal = function_nodeset_313_begin(server, ns)) &&
!(retVal = function_nodeset_314_begin(server, ns)) &&
!(retVal = function_nodeset_315_begin(server, ns)) &&
!(retVal = function_nodeset_316_begin(server, ns)) &&
!(retVal = function_nodeset_317_begin(server, ns)) &&
!(retVal = function_nodeset_318_begin(server, ns)) &&
!(retVal = function_nodeset_319_begin(server, ns)) &&
!(retVal = function_nodeset_320_begin(server, ns)) &&
!(retVal = function_nodeset_321_begin(server, ns)) &&
!(retVal = function_nodeset_322_begin(server, ns)) &&
!(retVal = function_nodeset_323_begin(server, ns)) &&
!(retVal = function_nodeset_324_begin(server, ns)) &&
!(retVal = function_nodeset_325_begin(server, ns)) &&
!(retVal = function_nodeset_326_begin(server, ns)) &&
!(retVal = function_nodeset_327_begin(server, ns)) &&
!(retVal = function_nodeset_328_begin(server, ns)) &&
!(retVal = function_nodeset_329_begin(server, ns)) &&
!(retVal = function_nodeset_330_begin(server, ns)) &&
!(retVal = function_nodeset_331_begin(server, ns)) &&
!(retVal = function_nodeset_332_begin(server, ns)) &&
!(retVal = function_nodeset_333_begin(server, ns)) &&
!(retVal = function_nodeset_334_begin(server, ns)) &&
!(retVal = function_nodeset_335_begin(server, ns)) &&
!(retVal = function_nodeset_336_begin(server, ns)) &&
!(retVal = function_nodeset_337_begin(server, ns)) &&
!(retVal = function_nodeset_338_begin(server, ns)) &&
!(retVal = function_nodeset_339_begin(server, ns)) &&
!(retVal = function_nodeset_340_begin(server, ns)) &&
!(retVal = function_nodeset_341_begin(server, ns)) &&
!(retVal = function_nodeset_342_begin(server, ns)) &&
!(retVal = function_nodeset_343_begin(server, ns)) &&
!(retVal = function_nodeset_344_begin(server, ns)) &&
!(retVal = function_nodeset_345_begin(server, ns)) &&
!(retVal = function_nodeset_346_begin(server, ns)) &&
!(retVal = function_nodeset_347_begin(server, ns)) &&
!(retVal = function_nodeset_348_begin(server, ns)) &&
!(retVal = function_nodeset_349_begin(server, ns)) &&
!(retVal = function_nodeset_350_begin(server, ns)) &&
!(retVal = function_nodeset_351_begin(server, ns)) &&
!(retVal = function_nodeset_352_begin(server, ns)) &&
!(retVal = function_nodeset_353_begin(server, ns)) &&
!(retVal = function_nodeset_354_begin(server, ns)) &&
!(retVal = function_nodeset_355_begin(server, ns)) &&
!(retVal = function_nodeset_356_begin(server, ns)) &&
!(retVal = function_nodeset_357_begin(server, ns)) &&
!(retVal = function_nodeset_358_begin(server, ns)) &&
!(retVal = function_nodeset_359_begin(server, ns)) &&
!(retVal = function_nodeset_360_begin(server, ns)) &&
!(retVal = function_nodeset_361_begin(server, ns)) &&
!(retVal = function_nodeset_362_begin(server, ns)) &&
!(retVal = function_nodeset_363_begin(server, ns)) &&
!(retVal = function_nodeset_364_begin(server, ns)) &&
!(retVal = function_nodeset_365_begin(server, ns)) &&
!(retVal = function_nodeset_366_begin(server, ns)) &&
!(retVal = function_nodeset_367_begin(server, ns)) &&
!(retVal = function_nodeset_368_begin(server, ns)) &&
!(retVal = function_nodeset_369_begin(server, ns)) &&
!(retVal = function_nodeset_370_begin(server, ns)) &&
!(retVal = function_nodeset_371_begin(server, ns)) &&
!(retVal = function_nodeset_372_begin(server, ns)) &&
!(retVal = function_nodeset_373_begin(server, ns)) &&
!(retVal = function_nodeset_374_begin(server, ns)) &&
!(retVal = function_nodeset_375_begin(server, ns)) &&
!(retVal = function_nodeset_376_begin(server, ns)) &&
!(retVal = function_nodeset_377_begin(server, ns)) &&
!(retVal = function_nodeset_378_begin(server, ns)) &&
!(retVal = function_nodeset_379_begin(server, ns)) &&
!(retVal = function_nodeset_380_begin(server, ns)) &&
!(retVal = function_nodeset_381_begin(server, ns)) &&
!(retVal = function_nodeset_382_begin(server, ns)) &&
!(retVal = function_nodeset_383_begin(server, ns)) &&
!(retVal = function_nodeset_384_begin(server, ns)) &&
!(retVal = function_nodeset_385_begin(server, ns)) &&
!(retVal = function_nodeset_386_begin(server, ns)) &&
!(retVal = function_nodeset_387_begin(server, ns)) &&
!(retVal = function_nodeset_388_begin(server, ns)) &&
!(retVal = function_nodeset_389_begin(server, ns)) &&
!(retVal = function_nodeset_390_begin(server, ns)) &&
!(retVal = function_nodeset_391_begin(server, ns)) &&
!(retVal = function_nodeset_392_begin(server, ns)) &&
!(retVal = function_nodeset_393_begin(server, ns)) &&
!(retVal = function_nodeset_394_begin(server, ns)) &&
!(retVal = function_nodeset_395_begin(server, ns)) &&
!(retVal = function_nodeset_396_begin(server, ns)) &&
!(retVal = function_nodeset_397_begin(server, ns)) &&
!(retVal = function_nodeset_398_begin(server, ns)) &&
!(retVal = function_nodeset_399_begin(server, ns)) &&
!(retVal = function_nodeset_400_begin(server, ns)) &&
!(retVal = function_nodeset_401_begin(server, ns)) &&
!(retVal = function_nodeset_402_begin(server, ns)) &&
!(retVal = function_nodeset_403_begin(server, ns)) &&
!(retVal = function_nodeset_404_begin(server, ns)) &&
!(retVal = function_nodeset_405_begin(server, ns)) &&
!(retVal = function_nodeset_406_begin(server, ns)) &&
!(retVal = function_nodeset_407_begin(server, ns)) &&
!(retVal = function_nodeset_408_begin(server, ns)) &&
!(retVal = function_nodeset_409_begin(server, ns)) &&
!(retVal = function_nodeset_410_begin(server, ns)) &&
!(retVal = function_nodeset_411_begin(server, ns)) &&
!(retVal = function_nodeset_412_begin(server, ns)) &&
!(retVal = function_nodeset_413_begin(server, ns)) &&
!(retVal = function_nodeset_414_begin(server, ns)) &&
!(retVal = function_nodeset_415_begin(server, ns)) &&
!(retVal = function_nodeset_416_begin(server, ns)) &&
!(retVal = function_nodeset_417_begin(server, ns)) &&
!(retVal = function_nodeset_418_begin(server, ns)) &&
!(retVal = function_nodeset_419_begin(server, ns)) &&
!(retVal = function_nodeset_420_begin(server, ns)) &&
!(retVal = function_nodeset_421_begin(server, ns)) &&
!(retVal = function_nodeset_422_begin(server, ns)) &&
!(retVal = function_nodeset_423_begin(server, ns)) &&
!(retVal = function_nodeset_424_begin(server, ns)) &&
!(retVal = function_nodeset_425_begin(server, ns)) &&
!(retVal = function_nodeset_426_begin(server, ns)) &&
!(retVal = function_nodeset_427_begin(server, ns)) &&
!(retVal = function_nodeset_428_begin(server, ns)) &&
!(retVal = function_nodeset_429_begin(server, ns)) &&
!(retVal = function_nodeset_430_begin(server, ns)) &&
!(retVal = function_nodeset_431_begin(server, ns)) &&
!(retVal = function_nodeset_432_begin(server, ns)) &&
!(retVal = function_nodeset_433_begin(server, ns)) &&
!(retVal = function_nodeset_434_begin(server, ns)) &&
!(retVal = function_nodeset_435_begin(server, ns)) &&
!(retVal = function_nodeset_436_begin(server, ns)) &&
!(retVal = function_nodeset_437_begin(server, ns)) &&
!(retVal = function_nodeset_438_begin(server, ns)) &&
!(retVal = function_nodeset_439_begin(server, ns)) &&
!(retVal = function_nodeset_440_begin(server, ns)) &&
!(retVal = function_nodeset_441_begin(server, ns)) &&
!(retVal = function_nodeset_442_begin(server, ns)) &&
!(retVal = function_nodeset_443_begin(server, ns)) &&
!(retVal = function_nodeset_444_begin(server, ns)) &&
!(retVal = function_nodeset_445_begin(server, ns)) &&
!(retVal = function_nodeset_446_begin(server, ns)) &&
!(retVal = function_nodeset_447_begin(server, ns)) &&
!(retVal = function_nodeset_448_begin(server, ns)) &&
!(retVal = function_nodeset_449_begin(server, ns)) &&
!(retVal = function_nodeset_450_begin(server, ns)) &&
!(retVal = function_nodeset_451_begin(server, ns)) &&
!(retVal = function_nodeset_452_begin(server, ns)) &&
!(retVal = function_nodeset_453_begin(server, ns)) &&
!(retVal = function_nodeset_454_begin(server, ns)) &&
!(retVal = function_nodeset_455_begin(server, ns)) &&
!(retVal = function_nodeset_456_begin(server, ns)) &&
!(retVal = function_nodeset_457_begin(server, ns)) &&
!(retVal = function_nodeset_458_begin(server, ns)) &&
!(retVal = function_nodeset_459_begin(server, ns)) &&
!(retVal = function_nodeset_460_begin(server, ns)) &&
!(retVal = function_nodeset_461_begin(server, ns)) &&
!(retVal = function_nodeset_462_begin(server, ns)) &&
!(retVal = function_nodeset_463_begin(server, ns)) &&
!(retVal = function_nodeset_464_begin(server, ns)) &&
!(retVal = function_nodeset_465_begin(server, ns)) &&
!(retVal = function_nodeset_466_begin(server, ns)) &&
!(retVal = function_nodeset_467_begin(server, ns)) &&
!(retVal = function_nodeset_468_begin(server, ns)) &&
!(retVal = function_nodeset_469_begin(server, ns)) &&
!(retVal = function_nodeset_470_begin(server, ns)) &&
!(retVal = function_nodeset_471_begin(server, ns)) &&
!(retVal = function_nodeset_472_begin(server, ns)) &&
!(retVal = function_nodeset_473_begin(server, ns)) &&
!(retVal = function_nodeset_474_begin(server, ns)) &&
!(retVal = function_nodeset_475_begin(server, ns)) &&
!(retVal = function_nodeset_476_begin(server, ns)) &&
!(retVal = function_nodeset_477_begin(server, ns)) &&
!(retVal = function_nodeset_478_begin(server, ns)) &&
!(retVal = function_nodeset_479_begin(server, ns)) &&
!(retVal = function_nodeset_480_begin(server, ns)) &&
!(retVal = function_nodeset_481_begin(server, ns)) &&
!(retVal = function_nodeset_482_begin(server, ns)) &&
!(retVal = function_nodeset_483_begin(server, ns)) &&
!(retVal = function_nodeset_484_begin(server, ns)) &&
!(retVal = function_nodeset_485_begin(server, ns)) &&
!(retVal = function_nodeset_486_begin(server, ns)) &&
!(retVal = function_nodeset_487_begin(server, ns)) &&
!(retVal = function_nodeset_488_begin(server, ns)) &&
!(retVal = function_nodeset_489_begin(server, ns)) &&
!(retVal = function_nodeset_490_begin(server, ns)) &&
!(retVal = function_nodeset_491_begin(server, ns)) &&
!(retVal = function_nodeset_492_begin(server, ns)) &&
!(retVal = function_nodeset_493_begin(server, ns)) &&
!(retVal = function_nodeset_494_begin(server, ns)) &&
!(retVal = function_nodeset_495_begin(server, ns)) &&
!(retVal = function_nodeset_496_begin(server, ns)) &&
!(retVal = function_nodeset_497_begin(server, ns)) &&
!(retVal = function_nodeset_498_begin(server, ns)) &&
!(retVal = function_nodeset_499_begin(server, ns)) &&
!(retVal = function_nodeset_500_begin(server, ns)) &&
!(retVal = function_nodeset_501_begin(server, ns)) &&
!(retVal = function_nodeset_502_begin(server, ns)) &&
!(retVal = function_nodeset_503_begin(server, ns)) &&
!(retVal = function_nodeset_504_begin(server, ns)) &&
!(retVal = function_nodeset_505_begin(server, ns)) &&
!(retVal = function_nodeset_506_begin(server, ns)) &&
!(retVal = function_nodeset_507_begin(server, ns)) &&
!(retVal = function_nodeset_508_begin(server, ns)) &&
!(retVal = function_nodeset_509_begin(server, ns)) &&
!(retVal = function_nodeset_510_begin(server, ns)) &&
!(retVal = function_nodeset_511_begin(server, ns)) &&
!(retVal = function_nodeset_512_begin(server, ns)) &&
!(retVal = function_nodeset_513_begin(server, ns)) &&
!(retVal = function_nodeset_514_begin(server, ns)) &&
!(retVal = function_nodeset_515_begin(server, ns)) &&
!(retVal = function_nodeset_516_begin(server, ns)) &&
!(retVal = function_nodeset_517_begin(server, ns)) &&
!(retVal = function_nodeset_518_begin(server, ns)) &&
!(retVal = function_nodeset_519_begin(server, ns)) &&
!(retVal = function_nodeset_520_begin(server, ns)) &&
!(retVal = function_nodeset_521_begin(server, ns)) &&
!(retVal = function_nodeset_522_begin(server, ns)) &&
!(retVal = function_nodeset_523_begin(server, ns)) &&
!(retVal = function_nodeset_524_begin(server, ns)) &&
!(retVal = function_nodeset_525_begin(server, ns)) &&
!(retVal = function_nodeset_526_begin(server, ns)) &&
!(retVal = function_nodeset_527_begin(server, ns)) &&
!(retVal = function_nodeset_528_begin(server, ns)) &&
!(retVal = function_nodeset_529_begin(server, ns)) &&
!(retVal = function_nodeset_530_begin(server, ns)) &&
!(retVal = function_nodeset_531_begin(server, ns)) &&
!(retVal = function_nodeset_532_begin(server, ns)) &&
!(retVal = function_nodeset_533_begin(server, ns)) &&
!(retVal = function_nodeset_534_begin(server, ns)) &&
!(retVal = function_nodeset_535_begin(server, ns)) &&
!(retVal = function_nodeset_536_begin(server, ns)) &&
!(retVal = function_nodeset_537_begin(server, ns)) &&
!(retVal = function_nodeset_538_begin(server, ns)) &&
!(retVal = function_nodeset_539_begin(server, ns)) &&
!(retVal = function_nodeset_540_begin(server, ns)) &&
!(retVal = function_nodeset_541_begin(server, ns)) &&
!(retVal = function_nodeset_542_begin(server, ns)) &&
!(retVal = function_nodeset_543_begin(server, ns)) &&
!(retVal = function_nodeset_544_begin(server, ns)) &&
!(retVal = function_nodeset_545_begin(server, ns)) &&
!(retVal = function_nodeset_546_begin(server, ns)) &&
!(retVal = function_nodeset_547_begin(server, ns)) &&
!(retVal = function_nodeset_548_begin(server, ns)) &&
!(retVal = function_nodeset_549_begin(server, ns)) &&
!(retVal = function_nodeset_550_begin(server, ns)) &&
!(retVal = function_nodeset_551_begin(server, ns)) &&
!(retVal = function_nodeset_552_begin(server, ns)) &&
!(retVal = function_nodeset_553_begin(server, ns)) &&
!(retVal = function_nodeset_554_begin(server, ns)) &&
!(retVal = function_nodeset_555_begin(server, ns)) &&
!(retVal = function_nodeset_556_begin(server, ns)) &&
!(retVal = function_nodeset_557_begin(server, ns)) &&
!(retVal = function_nodeset_558_begin(server, ns)) &&
!(retVal = function_nodeset_559_begin(server, ns)) &&
!(retVal = function_nodeset_560_begin(server, ns)) &&
!(retVal = function_nodeset_561_begin(server, ns)) &&
!(retVal = function_nodeset_562_begin(server, ns)) &&
!(retVal = function_nodeset_563_begin(server, ns)) &&
!(retVal = function_nodeset_564_begin(server, ns)) &&
!(retVal = function_nodeset_565_begin(server, ns)) &&
!(retVal = function_nodeset_566_begin(server, ns)) &&
!(retVal = function_nodeset_567_begin(server, ns)) &&
!(retVal = function_nodeset_568_begin(server, ns)) &&
!(retVal = function_nodeset_569_begin(server, ns)) &&
!(retVal = function_nodeset_570_begin(server, ns)) &&
!(retVal = function_nodeset_571_begin(server, ns)) &&
!(retVal = function_nodeset_572_begin(server, ns)) &&
!(retVal = function_nodeset_573_begin(server, ns)) &&
!(retVal = function_nodeset_574_begin(server, ns)) &&
!(retVal = function_nodeset_575_begin(server, ns)) &&
!(retVal = function_nodeset_576_begin(server, ns)) &&
!(retVal = function_nodeset_577_begin(server, ns)) &&
!(retVal = function_nodeset_577_finish(server, ns)) &&
!(retVal = function_nodeset_576_finish(server, ns)) &&
!(retVal = function_nodeset_575_finish(server, ns)) &&
!(retVal = function_nodeset_574_finish(server, ns)) &&
!(retVal = function_nodeset_573_finish(server, ns)) &&
!(retVal = function_nodeset_572_finish(server, ns)) &&
!(retVal = function_nodeset_571_finish(server, ns)) &&
!(retVal = function_nodeset_570_finish(server, ns)) &&
!(retVal = function_nodeset_569_finish(server, ns)) &&
!(retVal = function_nodeset_568_finish(server, ns)) &&
!(retVal = function_nodeset_567_finish(server, ns)) &&
!(retVal = function_nodeset_566_finish(server, ns)) &&
!(retVal = function_nodeset_565_finish(server, ns)) &&
!(retVal = function_nodeset_564_finish(server, ns)) &&
!(retVal = function_nodeset_563_finish(server, ns)) &&
!(retVal = function_nodeset_562_finish(server, ns)) &&
!(retVal = function_nodeset_561_finish(server, ns)) &&
!(retVal = function_nodeset_560_finish(server, ns)) &&
!(retVal = function_nodeset_559_finish(server, ns)) &&
!(retVal = function_nodeset_558_finish(server, ns)) &&
!(retVal = function_nodeset_557_finish(server, ns)) &&
!(retVal = function_nodeset_556_finish(server, ns)) &&
!(retVal = function_nodeset_555_finish(server, ns)) &&
!(retVal = function_nodeset_554_finish(server, ns)) &&
!(retVal = function_nodeset_553_finish(server, ns)) &&
!(retVal = function_nodeset_552_finish(server, ns)) &&
!(retVal = function_nodeset_551_finish(server, ns)) &&
!(retVal = function_nodeset_550_finish(server, ns)) &&
!(retVal = function_nodeset_549_finish(server, ns)) &&
!(retVal = function_nodeset_548_finish(server, ns)) &&
!(retVal = function_nodeset_547_finish(server, ns)) &&
!(retVal = function_nodeset_546_finish(server, ns)) &&
!(retVal = function_nodeset_545_finish(server, ns)) &&
!(retVal = function_nodeset_544_finish(server, ns)) &&
!(retVal = function_nodeset_543_finish(server, ns)) &&
!(retVal = function_nodeset_542_finish(server, ns)) &&
!(retVal = function_nodeset_541_finish(server, ns)) &&
!(retVal = function_nodeset_540_finish(server, ns)) &&
!(retVal = function_nodeset_539_finish(server, ns)) &&
!(retVal = function_nodeset_538_finish(server, ns)) &&
!(retVal = function_nodeset_537_finish(server, ns)) &&
!(retVal = function_nodeset_536_finish(server, ns)) &&
!(retVal = function_nodeset_535_finish(server, ns)) &&
!(retVal = function_nodeset_534_finish(server, ns)) &&
!(retVal = function_nodeset_533_finish(server, ns)) &&
!(retVal = function_nodeset_532_finish(server, ns)) &&
!(retVal = function_nodeset_531_finish(server, ns)) &&
!(retVal = function_nodeset_530_finish(server, ns)) &&
!(retVal = function_nodeset_529_finish(server, ns)) &&
!(retVal = function_nodeset_528_finish(server, ns)) &&
!(retVal = function_nodeset_527_finish(server, ns)) &&
!(retVal = function_nodeset_526_finish(server, ns)) &&
!(retVal = function_nodeset_525_finish(server, ns)) &&
!(retVal = function_nodeset_524_finish(server, ns)) &&
!(retVal = function_nodeset_523_finish(server, ns)) &&
!(retVal = function_nodeset_522_finish(server, ns)) &&
!(retVal = function_nodeset_521_finish(server, ns)) &&
!(retVal = function_nodeset_520_finish(server, ns)) &&
!(retVal = function_nodeset_519_finish(server, ns)) &&
!(retVal = function_nodeset_518_finish(server, ns)) &&
!(retVal = function_nodeset_517_finish(server, ns)) &&
!(retVal = function_nodeset_516_finish(server, ns)) &&
!(retVal = function_nodeset_515_finish(server, ns)) &&
!(retVal = function_nodeset_514_finish(server, ns)) &&
!(retVal = function_nodeset_513_finish(server, ns)) &&
!(retVal = function_nodeset_512_finish(server, ns)) &&
!(retVal = function_nodeset_511_finish(server, ns)) &&
!(retVal = function_nodeset_510_finish(server, ns)) &&
!(retVal = function_nodeset_509_finish(server, ns)) &&
!(retVal = function_nodeset_508_finish(server, ns)) &&
!(retVal = function_nodeset_507_finish(server, ns)) &&
!(retVal = function_nodeset_506_finish(server, ns)) &&
!(retVal = function_nodeset_505_finish(server, ns)) &&
!(retVal = function_nodeset_504_finish(server, ns)) &&
!(retVal = function_nodeset_503_finish(server, ns)) &&
!(retVal = function_nodeset_502_finish(server, ns)) &&
!(retVal = function_nodeset_501_finish(server, ns)) &&
!(retVal = function_nodeset_500_finish(server, ns)) &&
!(retVal = function_nodeset_499_finish(server, ns)) &&
!(retVal = function_nodeset_498_finish(server, ns)) &&
!(retVal = function_nodeset_497_finish(server, ns)) &&
!(retVal = function_nodeset_496_finish(server, ns)) &&
!(retVal = function_nodeset_495_finish(server, ns)) &&
!(retVal = function_nodeset_494_finish(server, ns)) &&
!(retVal = function_nodeset_493_finish(server, ns)) &&
!(retVal = function_nodeset_492_finish(server, ns)) &&
!(retVal = function_nodeset_491_finish(server, ns)) &&
!(retVal = function_nodeset_490_finish(server, ns)) &&
!(retVal = function_nodeset_489_finish(server, ns)) &&
!(retVal = function_nodeset_488_finish(server, ns)) &&
!(retVal = function_nodeset_487_finish(server, ns)) &&
!(retVal = function_nodeset_486_finish(server, ns)) &&
!(retVal = function_nodeset_485_finish(server, ns)) &&
!(retVal = function_nodeset_484_finish(server, ns)) &&
!(retVal = function_nodeset_483_finish(server, ns)) &&
!(retVal = function_nodeset_482_finish(server, ns)) &&
!(retVal = function_nodeset_481_finish(server, ns)) &&
!(retVal = function_nodeset_480_finish(server, ns)) &&
!(retVal = function_nodeset_479_finish(server, ns)) &&
!(retVal = function_nodeset_478_finish(server, ns)) &&
!(retVal = function_nodeset_477_finish(server, ns)) &&
!(retVal = function_nodeset_476_finish(server, ns)) &&
!(retVal = function_nodeset_475_finish(server, ns)) &&
!(retVal = function_nodeset_474_finish(server, ns)) &&
!(retVal = function_nodeset_473_finish(server, ns)) &&
!(retVal = function_nodeset_472_finish(server, ns)) &&
!(retVal = function_nodeset_471_finish(server, ns)) &&
!(retVal = function_nodeset_470_finish(server, ns)) &&
!(retVal = function_nodeset_469_finish(server, ns)) &&
!(retVal = function_nodeset_468_finish(server, ns)) &&
!(retVal = function_nodeset_467_finish(server, ns)) &&
!(retVal = function_nodeset_466_finish(server, ns)) &&
!(retVal = function_nodeset_465_finish(server, ns)) &&
!(retVal = function_nodeset_464_finish(server, ns)) &&
!(retVal = function_nodeset_463_finish(server, ns)) &&
!(retVal = function_nodeset_462_finish(server, ns)) &&
!(retVal = function_nodeset_461_finish(server, ns)) &&
!(retVal = function_nodeset_460_finish(server, ns)) &&
!(retVal = function_nodeset_459_finish(server, ns)) &&
!(retVal = function_nodeset_458_finish(server, ns)) &&
!(retVal = function_nodeset_457_finish(server, ns)) &&
!(retVal = function_nodeset_456_finish(server, ns)) &&
!(retVal = function_nodeset_455_finish(server, ns)) &&
!(retVal = function_nodeset_454_finish(server, ns)) &&
!(retVal = function_nodeset_453_finish(server, ns)) &&
!(retVal = function_nodeset_452_finish(server, ns)) &&
!(retVal = function_nodeset_451_finish(server, ns)) &&
!(retVal = function_nodeset_450_finish(server, ns)) &&
!(retVal = function_nodeset_449_finish(server, ns)) &&
!(retVal = function_nodeset_448_finish(server, ns)) &&
!(retVal = function_nodeset_447_finish(server, ns)) &&
!(retVal = function_nodeset_446_finish(server, ns)) &&
!(retVal = function_nodeset_445_finish(server, ns)) &&
!(retVal = function_nodeset_444_finish(server, ns)) &&
!(retVal = function_nodeset_443_finish(server, ns)) &&
!(retVal = function_nodeset_442_finish(server, ns)) &&
!(retVal = function_nodeset_441_finish(server, ns)) &&
!(retVal = function_nodeset_440_finish(server, ns)) &&
!(retVal = function_nodeset_439_finish(server, ns)) &&
!(retVal = function_nodeset_438_finish(server, ns)) &&
!(retVal = function_nodeset_437_finish(server, ns)) &&
!(retVal = function_nodeset_436_finish(server, ns)) &&
!(retVal = function_nodeset_435_finish(server, ns)) &&
!(retVal = function_nodeset_434_finish(server, ns)) &&
!(retVal = function_nodeset_433_finish(server, ns)) &&
!(retVal = function_nodeset_432_finish(server, ns)) &&
!(retVal = function_nodeset_431_finish(server, ns)) &&
!(retVal = function_nodeset_430_finish(server, ns)) &&
!(retVal = function_nodeset_429_finish(server, ns)) &&
!(retVal = function_nodeset_428_finish(server, ns)) &&
!(retVal = function_nodeset_427_finish(server, ns)) &&
!(retVal = function_nodeset_426_finish(server, ns)) &&
!(retVal = function_nodeset_425_finish(server, ns)) &&
!(retVal = function_nodeset_424_finish(server, ns)) &&
!(retVal = function_nodeset_423_finish(server, ns)) &&
!(retVal = function_nodeset_422_finish(server, ns)) &&
!(retVal = function_nodeset_421_finish(server, ns)) &&
!(retVal = function_nodeset_420_finish(server, ns)) &&
!(retVal = function_nodeset_419_finish(server, ns)) &&
!(retVal = function_nodeset_418_finish(server, ns)) &&
!(retVal = function_nodeset_417_finish(server, ns)) &&
!(retVal = function_nodeset_416_finish(server, ns)) &&
!(retVal = function_nodeset_415_finish(server, ns)) &&
!(retVal = function_nodeset_414_finish(server, ns)) &&
!(retVal = function_nodeset_413_finish(server, ns)) &&
!(retVal = function_nodeset_412_finish(server, ns)) &&
!(retVal = function_nodeset_411_finish(server, ns)) &&
!(retVal = function_nodeset_410_finish(server, ns)) &&
!(retVal = function_nodeset_409_finish(server, ns)) &&
!(retVal = function_nodeset_408_finish(server, ns)) &&
!(retVal = function_nodeset_407_finish(server, ns)) &&
!(retVal = function_nodeset_406_finish(server, ns)) &&
!(retVal = function_nodeset_405_finish(server, ns)) &&
!(retVal = function_nodeset_404_finish(server, ns)) &&
!(retVal = function_nodeset_403_finish(server, ns)) &&
!(retVal = function_nodeset_402_finish(server, ns)) &&
!(retVal = function_nodeset_401_finish(server, ns)) &&
!(retVal = function_nodeset_400_finish(server, ns)) &&
!(retVal = function_nodeset_399_finish(server, ns)) &&
!(retVal = function_nodeset_398_finish(server, ns)) &&
!(retVal = function_nodeset_397_finish(server, ns)) &&
!(retVal = function_nodeset_396_finish(server, ns)) &&
!(retVal = function_nodeset_395_finish(server, ns)) &&
!(retVal = function_nodeset_394_finish(server, ns)) &&
!(retVal = function_nodeset_393_finish(server, ns)) &&
!(retVal = function_nodeset_392_finish(server, ns)) &&
!(retVal = function_nodeset_391_finish(server, ns)) &&
!(retVal = function_nodeset_390_finish(server, ns)) &&
!(retVal = function_nodeset_389_finish(server, ns)) &&
!(retVal = function_nodeset_388_finish(server, ns)) &&
!(retVal = function_nodeset_387_finish(server, ns)) &&
!(retVal = function_nodeset_386_finish(server, ns)) &&
!(retVal = function_nodeset_385_finish(server, ns)) &&
!(retVal = function_nodeset_384_finish(server, ns)) &&
!(retVal = function_nodeset_383_finish(server, ns)) &&
!(retVal = function_nodeset_382_finish(server, ns)) &&
!(retVal = function_nodeset_381_finish(server, ns)) &&
!(retVal = function_nodeset_380_finish(server, ns)) &&
!(retVal = function_nodeset_379_finish(server, ns)) &&
!(retVal = function_nodeset_378_finish(server, ns)) &&
!(retVal = function_nodeset_377_finish(server, ns)) &&
!(retVal = function_nodeset_376_finish(server, ns)) &&
!(retVal = function_nodeset_375_finish(server, ns)) &&
!(retVal = function_nodeset_374_finish(server, ns)) &&
!(retVal = function_nodeset_373_finish(server, ns)) &&
!(retVal = function_nodeset_372_finish(server, ns)) &&
!(retVal = function_nodeset_371_finish(server, ns)) &&
!(retVal = function_nodeset_370_finish(server, ns)) &&
!(retVal = function_nodeset_369_finish(server, ns)) &&
!(retVal = function_nodeset_368_finish(server, ns)) &&
!(retVal = function_nodeset_367_finish(server, ns)) &&
!(retVal = function_nodeset_366_finish(server, ns)) &&
!(retVal = function_nodeset_365_finish(server, ns)) &&
!(retVal = function_nodeset_364_finish(server, ns)) &&
!(retVal = function_nodeset_363_finish(server, ns)) &&
!(retVal = function_nodeset_362_finish(server, ns)) &&
!(retVal = function_nodeset_361_finish(server, ns)) &&
!(retVal = function_nodeset_360_finish(server, ns)) &&
!(retVal = function_nodeset_359_finish(server, ns)) &&
!(retVal = function_nodeset_358_finish(server, ns)) &&
!(retVal = function_nodeset_357_finish(server, ns)) &&
!(retVal = function_nodeset_356_finish(server, ns)) &&
!(retVal = function_nodeset_355_finish(server, ns)) &&
!(retVal = function_nodeset_354_finish(server, ns)) &&
!(retVal = function_nodeset_353_finish(server, ns)) &&
!(retVal = function_nodeset_352_finish(server, ns)) &&
!(retVal = function_nodeset_351_finish(server, ns)) &&
!(retVal = function_nodeset_350_finish(server, ns)) &&
!(retVal = function_nodeset_349_finish(server, ns)) &&
!(retVal = function_nodeset_348_finish(server, ns)) &&
!(retVal = function_nodeset_347_finish(server, ns)) &&
!(retVal = function_nodeset_346_finish(server, ns)) &&
!(retVal = function_nodeset_345_finish(server, ns)) &&
!(retVal = function_nodeset_344_finish(server, ns)) &&
!(retVal = function_nodeset_343_finish(server, ns)) &&
!(retVal = function_nodeset_342_finish(server, ns)) &&
!(retVal = function_nodeset_341_finish(server, ns)) &&
!(retVal = function_nodeset_340_finish(server, ns)) &&
!(retVal = function_nodeset_339_finish(server, ns)) &&
!(retVal = function_nodeset_338_finish(server, ns)) &&
!(retVal = function_nodeset_337_finish(server, ns)) &&
!(retVal = function_nodeset_336_finish(server, ns)) &&
!(retVal = function_nodeset_335_finish(server, ns)) &&
!(retVal = function_nodeset_334_finish(server, ns)) &&
!(retVal = function_nodeset_333_finish(server, ns)) &&
!(retVal = function_nodeset_332_finish(server, ns)) &&
!(retVal = function_nodeset_331_finish(server, ns)) &&
!(retVal = function_nodeset_330_finish(server, ns)) &&
!(retVal = function_nodeset_329_finish(server, ns)) &&
!(retVal = function_nodeset_328_finish(server, ns)) &&
!(retVal = function_nodeset_327_finish(server, ns)) &&
!(retVal = function_nodeset_326_finish(server, ns)) &&
!(retVal = function_nodeset_325_finish(server, ns)) &&
!(retVal = function_nodeset_324_finish(server, ns)) &&
!(retVal = function_nodeset_323_finish(server, ns)) &&
!(retVal = function_nodeset_322_finish(server, ns)) &&
!(retVal = function_nodeset_321_finish(server, ns)) &&
!(retVal = function_nodeset_320_finish(server, ns)) &&
!(retVal = function_nodeset_319_finish(server, ns)) &&
!(retVal = function_nodeset_318_finish(server, ns)) &&
!(retVal = function_nodeset_317_finish(server, ns)) &&
!(retVal = function_nodeset_316_finish(server, ns)) &&
!(retVal = function_nodeset_315_finish(server, ns)) &&
!(retVal = function_nodeset_314_finish(server, ns)) &&
!(retVal = function_nodeset_313_finish(server, ns)) &&
!(retVal = function_nodeset_312_finish(server, ns)) &&
!(retVal = function_nodeset_311_finish(server, ns)) &&
!(retVal = function_nodeset_310_finish(server, ns)) &&
!(retVal = function_nodeset_309_finish(server, ns)) &&
!(retVal = function_nodeset_308_finish(server, ns)) &&
!(retVal = function_nodeset_307_finish(server, ns)) &&
!(retVal = function_nodeset_306_finish(server, ns)) &&
!(retVal = function_nodeset_305_finish(server, ns)) &&
!(retVal = function_nodeset_304_finish(server, ns)) &&
!(retVal = function_nodeset_303_finish(server, ns)) &&
!(retVal = function_nodeset_302_finish(server, ns)) &&
!(retVal = function_nodeset_301_finish(server, ns)) &&
!(retVal = function_nodeset_300_finish(server, ns)) &&
!(retVal = function_nodeset_299_finish(server, ns)) &&
!(retVal = function_nodeset_298_finish(server, ns)) &&
!(retVal = function_nodeset_297_finish(server, ns)) &&
!(retVal = function_nodeset_296_finish(server, ns)) &&
!(retVal = function_nodeset_295_finish(server, ns)) &&
!(retVal = function_nodeset_294_finish(server, ns)) &&
!(retVal = function_nodeset_293_finish(server, ns)) &&
!(retVal = function_nodeset_292_finish(server, ns)) &&
!(retVal = function_nodeset_291_finish(server, ns)) &&
!(retVal = function_nodeset_290_finish(server, ns)) &&
!(retVal = function_nodeset_289_finish(server, ns)) &&
!(retVal = function_nodeset_288_finish(server, ns)) &&
!(retVal = function_nodeset_287_finish(server, ns)) &&
!(retVal = function_nodeset_286_finish(server, ns)) &&
!(retVal = function_nodeset_285_finish(server, ns)) &&
!(retVal = function_nodeset_284_finish(server, ns)) &&
!(retVal = function_nodeset_283_finish(server, ns)) &&
!(retVal = function_nodeset_282_finish(server, ns)) &&
!(retVal = function_nodeset_281_finish(server, ns)) &&
!(retVal = function_nodeset_280_finish(server, ns)) &&
!(retVal = function_nodeset_279_finish(server, ns)) &&
!(retVal = function_nodeset_278_finish(server, ns)) &&
!(retVal = function_nodeset_277_finish(server, ns)) &&
!(retVal = function_nodeset_276_finish(server, ns)) &&
!(retVal = function_nodeset_275_finish(server, ns)) &&
!(retVal = function_nodeset_274_finish(server, ns)) &&
!(retVal = function_nodeset_273_finish(server, ns)) &&
!(retVal = function_nodeset_272_finish(server, ns)) &&
!(retVal = function_nodeset_271_finish(server, ns)) &&
!(retVal = function_nodeset_270_finish(server, ns)) &&
!(retVal = function_nodeset_269_finish(server, ns)) &&
!(retVal = function_nodeset_268_finish(server, ns)) &&
!(retVal = function_nodeset_267_finish(server, ns)) &&
!(retVal = function_nodeset_266_finish(server, ns)) &&
!(retVal = function_nodeset_265_finish(server, ns)) &&
!(retVal = function_nodeset_264_finish(server, ns)) &&
!(retVal = function_nodeset_263_finish(server, ns)) &&
!(retVal = function_nodeset_262_finish(server, ns)) &&
!(retVal = function_nodeset_261_finish(server, ns)) &&
!(retVal = function_nodeset_260_finish(server, ns)) &&
!(retVal = function_nodeset_259_finish(server, ns)) &&
!(retVal = function_nodeset_258_finish(server, ns)) &&
!(retVal = function_nodeset_257_finish(server, ns)) &&
!(retVal = function_nodeset_256_finish(server, ns)) &&
!(retVal = function_nodeset_255_finish(server, ns)) &&
!(retVal = function_nodeset_254_finish(server, ns)) &&
!(retVal = function_nodeset_253_finish(server, ns)) &&
!(retVal = function_nodeset_252_finish(server, ns)) &&
!(retVal = function_nodeset_251_finish(server, ns)) &&
!(retVal = function_nodeset_250_finish(server, ns)) &&
!(retVal = function_nodeset_249_finish(server, ns)) &&
!(retVal = function_nodeset_248_finish(server, ns)) &&
!(retVal = function_nodeset_247_finish(server, ns)) &&
!(retVal = function_nodeset_246_finish(server, ns)) &&
!(retVal = function_nodeset_245_finish(server, ns)) &&
!(retVal = function_nodeset_244_finish(server, ns)) &&
!(retVal = function_nodeset_243_finish(server, ns)) &&
!(retVal = function_nodeset_242_finish(server, ns)) &&
!(retVal = function_nodeset_241_finish(server, ns)) &&
!(retVal = function_nodeset_240_finish(server, ns)) &&
!(retVal = function_nodeset_239_finish(server, ns)) &&
!(retVal = function_nodeset_238_finish(server, ns)) &&
!(retVal = function_nodeset_237_finish(server, ns)) &&
!(retVal = function_nodeset_236_finish(server, ns)) &&
!(retVal = function_nodeset_235_finish(server, ns)) &&
!(retVal = function_nodeset_234_finish(server, ns)) &&
!(retVal = function_nodeset_233_finish(server, ns)) &&
!(retVal = function_nodeset_232_finish(server, ns)) &&
!(retVal = function_nodeset_231_finish(server, ns)) &&
!(retVal = function_nodeset_230_finish(server, ns)) &&
!(retVal = function_nodeset_229_finish(server, ns)) &&
!(retVal = function_nodeset_228_finish(server, ns)) &&
!(retVal = function_nodeset_227_finish(server, ns)) &&
!(retVal = function_nodeset_226_finish(server, ns)) &&
!(retVal = function_nodeset_225_finish(server, ns)) &&
!(retVal = function_nodeset_224_finish(server, ns)) &&
!(retVal = function_nodeset_223_finish(server, ns)) &&
!(retVal = function_nodeset_222_finish(server, ns)) &&
!(retVal = function_nodeset_221_finish(server, ns)) &&
!(retVal = function_nodeset_220_finish(server, ns)) &&
!(retVal = function_nodeset_219_finish(server, ns)) &&
!(retVal = function_nodeset_218_finish(server, ns)) &&
!(retVal = function_nodeset_217_finish(server, ns)) &&
!(retVal = function_nodeset_216_finish(server, ns)) &&
!(retVal = function_nodeset_215_finish(server, ns)) &&
!(retVal = function_nodeset_214_finish(server, ns)) &&
!(retVal = function_nodeset_213_finish(server, ns)) &&
!(retVal = function_nodeset_212_finish(server, ns)) &&
!(retVal = function_nodeset_211_finish(server, ns)) &&
!(retVal = function_nodeset_210_finish(server, ns)) &&
!(retVal = function_nodeset_209_finish(server, ns)) &&
!(retVal = function_nodeset_208_finish(server, ns)) &&
!(retVal = function_nodeset_207_finish(server, ns)) &&
!(retVal = function_nodeset_206_finish(server, ns)) &&
!(retVal = function_nodeset_205_finish(server, ns)) &&
!(retVal = function_nodeset_204_finish(server, ns)) &&
!(retVal = function_nodeset_203_finish(server, ns)) &&
!(retVal = function_nodeset_202_finish(server, ns)) &&
!(retVal = function_nodeset_201_finish(server, ns)) &&
!(retVal = function_nodeset_200_finish(server, ns)) &&
!(retVal = function_nodeset_199_finish(server, ns)) &&
!(retVal = function_nodeset_198_finish(server, ns)) &&
!(retVal = function_nodeset_197_finish(server, ns)) &&
!(retVal = function_nodeset_196_finish(server, ns)) &&
!(retVal = function_nodeset_195_finish(server, ns)) &&
!(retVal = function_nodeset_194_finish(server, ns)) &&
!(retVal = function_nodeset_193_finish(server, ns)) &&
!(retVal = function_nodeset_192_finish(server, ns)) &&
!(retVal = function_nodeset_191_finish(server, ns)) &&
!(retVal = function_nodeset_190_finish(server, ns)) &&
!(retVal = function_nodeset_189_finish(server, ns)) &&
!(retVal = function_nodeset_188_finish(server, ns)) &&
!(retVal = function_nodeset_187_finish(server, ns)) &&
!(retVal = function_nodeset_186_finish(server, ns)) &&
!(retVal = function_nodeset_185_finish(server, ns)) &&
!(retVal = function_nodeset_184_finish(server, ns)) &&
!(retVal = function_nodeset_183_finish(server, ns)) &&
!(retVal = function_nodeset_182_finish(server, ns)) &&
!(retVal = function_nodeset_181_finish(server, ns)) &&
!(retVal = function_nodeset_180_finish(server, ns)) &&
!(retVal = function_nodeset_179_finish(server, ns)) &&
!(retVal = function_nodeset_178_finish(server, ns)) &&
!(retVal = function_nodeset_177_finish(server, ns)) &&
!(retVal = function_nodeset_176_finish(server, ns)) &&
!(retVal = function_nodeset_175_finish(server, ns)) &&
!(retVal = function_nodeset_174_finish(server, ns)) &&
!(retVal = function_nodeset_173_finish(server, ns)) &&
!(retVal = function_nodeset_172_finish(server, ns)) &&
!(retVal = function_nodeset_171_finish(server, ns)) &&
!(retVal = function_nodeset_170_finish(server, ns)) &&
!(retVal = function_nodeset_169_finish(server, ns)) &&
!(retVal = function_nodeset_168_finish(server, ns)) &&
!(retVal = function_nodeset_167_finish(server, ns)) &&
!(retVal = function_nodeset_166_finish(server, ns)) &&
!(retVal = function_nodeset_165_finish(server, ns)) &&
!(retVal = function_nodeset_164_finish(server, ns)) &&
!(retVal = function_nodeset_163_finish(server, ns)) &&
!(retVal = function_nodeset_162_finish(server, ns)) &&
!(retVal = function_nodeset_161_finish(server, ns)) &&
!(retVal = function_nodeset_160_finish(server, ns)) &&
!(retVal = function_nodeset_159_finish(server, ns)) &&
!(retVal = function_nodeset_158_finish(server, ns)) &&
!(retVal = function_nodeset_157_finish(server, ns)) &&
!(retVal = function_nodeset_156_finish(server, ns)) &&
!(retVal = function_nodeset_155_finish(server, ns)) &&
!(retVal = function_nodeset_154_finish(server, ns)) &&
!(retVal = function_nodeset_153_finish(server, ns)) &&
!(retVal = function_nodeset_152_finish(server, ns)) &&
!(retVal = function_nodeset_151_finish(server, ns)) &&
!(retVal = function_nodeset_150_finish(server, ns)) &&
!(retVal = function_nodeset_149_finish(server, ns)) &&
!(retVal = function_nodeset_148_finish(server, ns)) &&
!(retVal = function_nodeset_147_finish(server, ns)) &&
!(retVal = function_nodeset_146_finish(server, ns)) &&
!(retVal = function_nodeset_145_finish(server, ns)) &&
!(retVal = function_nodeset_144_finish(server, ns)) &&
!(retVal = function_nodeset_143_finish(server, ns)) &&
!(retVal = function_nodeset_142_finish(server, ns)) &&
!(retVal = function_nodeset_141_finish(server, ns)) &&
!(retVal = function_nodeset_140_finish(server, ns)) &&
!(retVal = function_nodeset_139_finish(server, ns)) &&
!(retVal = function_nodeset_138_finish(server, ns)) &&
!(retVal = function_nodeset_137_finish(server, ns)) &&
!(retVal = function_nodeset_136_finish(server, ns)) &&
!(retVal = function_nodeset_135_finish(server, ns)) &&
!(retVal = function_nodeset_134_finish(server, ns)) &&
!(retVal = function_nodeset_133_finish(server, ns)) &&
!(retVal = function_nodeset_132_finish(server, ns)) &&
!(retVal = function_nodeset_131_finish(server, ns)) &&
!(retVal = function_nodeset_130_finish(server, ns)) &&
!(retVal = function_nodeset_129_finish(server, ns)) &&
!(retVal = function_nodeset_128_finish(server, ns)) &&
!(retVal = function_nodeset_127_finish(server, ns)) &&
!(retVal = function_nodeset_126_finish(server, ns)) &&
!(retVal = function_nodeset_125_finish(server, ns)) &&
!(retVal = function_nodeset_124_finish(server, ns)) &&
!(retVal = function_nodeset_123_finish(server, ns)) &&
!(retVal = function_nodeset_122_finish(server, ns)) &&
!(retVal = function_nodeset_121_finish(server, ns)) &&
!(retVal = function_nodeset_120_finish(server, ns)) &&
!(retVal = function_nodeset_119_finish(server, ns)) &&
!(retVal = function_nodeset_118_finish(server, ns)) &&
!(retVal = function_nodeset_117_finish(server, ns)) &&
!(retVal = function_nodeset_116_finish(server, ns)) &&
!(retVal = function_nodeset_115_finish(server, ns)) &&
!(retVal = function_nodeset_114_finish(server, ns)) &&
!(retVal = function_nodeset_113_finish(server, ns)) &&
!(retVal = function_nodeset_112_finish(server, ns)) &&
!(retVal = function_nodeset_111_finish(server, ns)) &&
!(retVal = function_nodeset_110_finish(server, ns)) &&
!(retVal = function_nodeset_109_finish(server, ns)) &&
!(retVal = function_nodeset_108_finish(server, ns)) &&
!(retVal = function_nodeset_107_finish(server, ns)) &&
!(retVal = function_nodeset_106_finish(server, ns)) &&
!(retVal = function_nodeset_105_finish(server, ns)) &&
!(retVal = function_nodeset_104_finish(server, ns)) &&
!(retVal = function_nodeset_103_finish(server, ns)) &&
!(retVal = function_nodeset_102_finish(server, ns)) &&
!(retVal = function_nodeset_101_finish(server, ns)) &&
!(retVal = function_nodeset_100_finish(server, ns)) &&
!(retVal = function_nodeset_99_finish(server, ns)) &&
!(retVal = function_nodeset_98_finish(server, ns)) &&
!(retVal = function_nodeset_97_finish(server, ns)) &&
!(retVal = function_nodeset_96_finish(server, ns)) &&
!(retVal = function_nodeset_95_finish(server, ns)) &&
!(retVal = function_nodeset_94_finish(server, ns)) &&
!(retVal = function_nodeset_93_finish(server, ns)) &&
!(retVal = function_nodeset_92_finish(server, ns)) &&
!(retVal = function_nodeset_91_finish(server, ns)) &&
!(retVal = function_nodeset_90_finish(server, ns)) &&
!(retVal = function_nodeset_89_finish(server, ns)) &&
!(retVal = function_nodeset_88_finish(server, ns)) &&
!(retVal = function_nodeset_87_finish(server, ns)) &&
!(retVal = function_nodeset_86_finish(server, ns)) &&
!(retVal = function_nodeset_85_finish(server, ns)) &&
!(retVal = function_nodeset_84_finish(server, ns)) &&
!(retVal = function_nodeset_83_finish(server, ns)) &&
!(retVal = function_nodeset_82_finish(server, ns)) &&
!(retVal = function_nodeset_81_finish(server, ns)) &&
!(retVal = function_nodeset_80_finish(server, ns)) &&
!(retVal = function_nodeset_79_finish(server, ns)) &&
!(retVal = function_nodeset_78_finish(server, ns)) &&
!(retVal = function_nodeset_77_finish(server, ns)) &&
!(retVal = function_nodeset_76_finish(server, ns)) &&
!(retVal = function_nodeset_75_finish(server, ns)) &&
!(retVal = function_nodeset_74_finish(server, ns)) &&
!(retVal = function_nodeset_73_finish(server, ns)) &&
!(retVal = function_nodeset_72_finish(server, ns)) &&
!(retVal = function_nodeset_71_finish(server, ns)) &&
!(retVal = function_nodeset_70_finish(server, ns)) &&
!(retVal = function_nodeset_69_finish(server, ns)) &&
!(retVal = function_nodeset_68_finish(server, ns)) &&
!(retVal = function_nodeset_67_finish(server, ns)) &&
!(retVal = function_nodeset_66_finish(server, ns)) &&
!(retVal = function_nodeset_65_finish(server, ns)) &&
!(retVal = function_nodeset_64_finish(server, ns)) &&
!(retVal = function_nodeset_63_finish(server, ns)) &&
!(retVal = function_nodeset_62_finish(server, ns)) &&
!(retVal = function_nodeset_61_finish(server, ns)) &&
!(retVal = function_nodeset_60_finish(server, ns)) &&
!(retVal = function_nodeset_59_finish(server, ns)) &&
!(retVal = function_nodeset_58_finish(server, ns)) &&
!(retVal = function_nodeset_57_finish(server, ns)) &&
!(retVal = function_nodeset_56_finish(server, ns)) &&
!(retVal = function_nodeset_55_finish(server, ns)) &&
!(retVal = function_nodeset_54_finish(server, ns)) &&
!(retVal = function_nodeset_53_finish(server, ns)) &&
!(retVal = function_nodeset_52_finish(server, ns)) &&
!(retVal = function_nodeset_51_finish(server, ns)) &&
!(retVal = function_nodeset_50_finish(server, ns)) &&
!(retVal = function_nodeset_49_finish(server, ns)) &&
!(retVal = function_nodeset_48_finish(server, ns)) &&
!(retVal = function_nodeset_47_finish(server, ns)) &&
!(retVal = function_nodeset_46_finish(server, ns)) &&
!(retVal = function_nodeset_45_finish(server, ns)) &&
!(retVal = function_nodeset_44_finish(server, ns)) &&
!(retVal = function_nodeset_43_finish(server, ns)) &&
!(retVal = function_nodeset_42_finish(server, ns)) &&
!(retVal = function_nodeset_41_finish(server, ns)) &&
!(retVal = function_nodeset_40_finish(server, ns)) &&
!(retVal = function_nodeset_39_finish(server, ns)) &&
!(retVal = function_nodeset_38_finish(server, ns)) &&
!(retVal = function_nodeset_37_finish(server, ns)) &&
!(retVal = function_nodeset_36_finish(server, ns)) &&
!(retVal = function_nodeset_35_finish(server, ns)) &&
!(retVal = function_nodeset_34_finish(server, ns)) &&
!(retVal = function_nodeset_33_finish(server, ns)) &&
!(retVal = function_nodeset_32_finish(server, ns)) &&
!(retVal = function_nodeset_31_finish(server, ns)) &&
!(retVal = function_nodeset_30_finish(server, ns)) &&
!(retVal = function_nodeset_29_finish(server, ns)) &&
!(retVal = function_nodeset_28_finish(server, ns)) &&
!(retVal = function_nodeset_27_finish(server, ns)) &&
!(retVal = function_nodeset_26_finish(server, ns)) &&
!(retVal = function_nodeset_25_finish(server, ns)) &&
!(retVal = function_nodeset_24_finish(server, ns)) &&
!(retVal = function_nodeset_23_finish(server, ns)) &&
!(retVal = function_nodeset_22_finish(server, ns)) &&
!(retVal = function_nodeset_21_finish(server, ns)) &&
!(retVal = function_nodeset_20_finish(server, ns)) &&
!(retVal = function_nodeset_19_finish(server, ns)) &&
!(retVal = function_nodeset_18_finish(server, ns)) &&
!(retVal = function_nodeset_17_finish(server, ns)) &&
!(retVal = function_nodeset_16_finish(server, ns)) &&
!(retVal = function_nodeset_15_finish(server, ns)) &&
!(retVal = function_nodeset_14_finish(server, ns)) &&
!(retVal = function_nodeset_13_finish(server, ns)) &&
!(retVal = function_nodeset_12_finish(server, ns)) &&
!(retVal = function_nodeset_11_finish(server, ns)) &&
!(retVal = function_nodeset_10_finish(server, ns)) &&
!(retVal = function_nodeset_9_finish(server, ns)) &&
!(retVal = function_nodeset_8_finish(server, ns)) &&
!(retVal = function_nodeset_7_finish(server, ns)) &&
!(retVal = function_nodeset_6_finish(server, ns)) &&
!(retVal = function_nodeset_5_finish(server, ns)) &&
!(retVal = function_nodeset_4_finish(server, ns)) &&
!(retVal = function_nodeset_3_finish(server, ns)) &&
!(retVal = function_nodeset_2_finish(server, ns)) &&
!(retVal = function_nodeset_1_finish(server, ns)) &&
!(retVal = function_nodeset_0_finish(server, ns)) 
); (void)(dummy);
return retVal;
}
