/* Generated from MTConnect.TypeDictionary.Binary.xml with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host SY-MacBook-Pro.local by user simon at 2020-02-06 04:44:45 */

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_mtconnect_generated.h"
#endif



/* InterfaceStatusDataType */
static UA_INLINE size_t
UA_InterfaceStatusDataType_calcSizeBinary(const UA_InterfaceStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_InterfaceStatusDataType_encodeBinary(const UA_InterfaceStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_InterfaceStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_InterfaceStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE], NULL);
}

/* AssetEventDataType */
static UA_INLINE size_t
UA_AssetEventDataType_calcSizeBinary(const UA_AssetEventDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_AssetEventDataType_encodeBinary(const UA_AssetEventDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AssetEventDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AssetEventDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE], NULL);
}

/* MTStatisticType */
static UA_INLINE size_t
UA_MTStatisticType_calcSizeBinary(const UA_MTStatisticType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSTATISTICTYPE]);
}
static UA_INLINE UA_StatusCode
UA_MTStatisticType_encodeBinary(const UA_MTStatisticType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSTATISTICTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MTStatisticType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MTStatisticType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSTATISTICTYPE], NULL);
}

/* MTResetTriggerType */
static UA_INLINE size_t
UA_MTResetTriggerType_calcSizeBinary(const UA_MTResetTriggerType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE]);
}
static UA_INLINE UA_StatusCode
UA_MTResetTriggerType_encodeBinary(const UA_MTResetTriggerType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MTResetTriggerType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MTResetTriggerType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE], NULL);
}

/* MessageDataType */
static UA_INLINE size_t
UA_MessageDataType_calcSizeBinary(const UA_MessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MessageDataType_encodeBinary(const UA_MessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MESSAGEDATATYPE], NULL);
}

/* EmergencyStopDataType */
static UA_INLINE size_t
UA_EmergencyStopDataType_calcSizeBinary(const UA_EmergencyStopDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EmergencyStopDataType_encodeBinary(const UA_EmergencyStopDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EmergencyStopDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EmergencyStopDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE], NULL);
}

/* OpenStateDataType */
static UA_INLINE size_t
UA_OpenStateDataType_calcSizeBinary(const UA_OpenStateDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_OPENSTATEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_OpenStateDataType_encodeBinary(const UA_OpenStateDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_OPENSTATEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenStateDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenStateDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_OPENSTATEDATATYPE], NULL);
}

/* OnOffDataType */
static UA_INLINE size_t
UA_OnOffDataType_calcSizeBinary(const UA_OnOffDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ONOFFDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_OnOffDataType_encodeBinary(const UA_OnOffDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ONOFFDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OnOffDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OnOffDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ONOFFDATATYPE], NULL);
}

/* AxisCouplingDataType */
static UA_INLINE size_t
UA_AxisCouplingDataType_calcSizeBinary(const UA_AxisCouplingDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_AxisCouplingDataType_encodeBinary(const UA_AxisCouplingDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AxisCouplingDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AxisCouplingDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE], NULL);
}

/* FunctionalModeDataType */
static UA_INLINE size_t
UA_FunctionalModeDataType_calcSizeBinary(const UA_FunctionalModeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_FunctionalModeDataType_encodeBinary(const UA_FunctionalModeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FunctionalModeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FunctionalModeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE], NULL);
}

/* ActiveStateDataType */
static UA_INLINE size_t
UA_ActiveStateDataType_calcSizeBinary(const UA_ActiveStateDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ActiveStateDataType_encodeBinary(const UA_ActiveStateDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActiveStateDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActiveStateDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE], NULL);
}

/* AxisStateDataType */
static UA_INLINE size_t
UA_AxisStateDataType_calcSizeBinary(const UA_AxisStateDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISSTATEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_AxisStateDataType_encodeBinary(const UA_AxisStateDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISSTATEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AxisStateDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AxisStateDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISSTATEDATATYPE], NULL);
}

/* MTCategoryType */
static UA_INLINE size_t
UA_MTCategoryType_calcSizeBinary(const UA_MTCategoryType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCATEGORYTYPE]);
}
static UA_INLINE UA_StatusCode
UA_MTCategoryType_encodeBinary(const UA_MTCategoryType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCATEGORYTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MTCategoryType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MTCategoryType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCATEGORYTYPE], NULL);
}

/* CompositionStateDataType */
static UA_INLINE size_t
UA_CompositionStateDataType_calcSizeBinary(const UA_CompositionStateDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CompositionStateDataType_encodeBinary(const UA_CompositionStateDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CompositionStateDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CompositionStateDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE], NULL);
}

/* ProgramEditDataType */
static UA_INLINE size_t
UA_ProgramEditDataType_calcSizeBinary(const UA_ProgramEditDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ProgramEditDataType_encodeBinary(const UA_ProgramEditDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ProgramEditDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ProgramEditDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE], NULL);
}

/* DirectionDataType */
static UA_INLINE size_t
UA_DirectionDataType_calcSizeBinary(const UA_DirectionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_DIRECTIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DirectionDataType_encodeBinary(const UA_DirectionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_DIRECTIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DirectionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DirectionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_DIRECTIONDATATYPE], NULL);
}

/* MTSeverityDataType */
static UA_INLINE size_t
UA_MTSeverityDataType_calcSizeBinary(const UA_MTSeverityDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MTSeverityDataType_encodeBinary(const UA_MTSeverityDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MTSeverityDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MTSeverityDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE], NULL);
}

/* ExecutionDataType */
static UA_INLINE size_t
UA_ExecutionDataType_calcSizeBinary(const UA_ExecutionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EXECUTIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ExecutionDataType_encodeBinary(const UA_ExecutionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EXECUTIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ExecutionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ExecutionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EXECUTIONDATATYPE], NULL);
}

/* ControllerModeDataType */
static UA_INLINE size_t
UA_ControllerModeDataType_calcSizeBinary(const UA_ControllerModeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ControllerModeDataType_encodeBinary(const UA_ControllerModeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ControllerModeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ControllerModeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE], NULL);
}

/* PathModeDataType */
static UA_INLINE size_t
UA_PathModeDataType_calcSizeBinary(const UA_PathModeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PATHMODEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PathModeDataType_encodeBinary(const UA_PathModeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PATHMODEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PathModeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PathModeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PATHMODEDATATYPE], NULL);
}

/* MTRepresentationType */
static UA_INLINE size_t
UA_MTRepresentationType_calcSizeBinary(const UA_MTRepresentationType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE]);
}
static UA_INLINE UA_StatusCode
UA_MTRepresentationType_encodeBinary(const UA_MTRepresentationType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MTRepresentationType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MTRepresentationType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE], NULL);
}

/* MTCoordinateSystemType */
static UA_INLINE size_t
UA_MTCoordinateSystemType_calcSizeBinary(const UA_MTCoordinateSystemType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE]);
}
static UA_INLINE UA_StatusCode
UA_MTCoordinateSystemType_encodeBinary(const UA_MTCoordinateSystemType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MTCoordinateSystemType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MTCoordinateSystemType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE], NULL);
}

/* YesNoDataType */
static UA_INLINE size_t
UA_YesNoDataType_calcSizeBinary(const UA_YesNoDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_YESNODATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_YesNoDataType_encodeBinary(const UA_YesNoDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_YESNODATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_YesNoDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_YesNoDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_YESNODATATYPE], NULL);
}

/* AvailabilityDataType */
static UA_INLINE size_t
UA_AvailabilityDataType_calcSizeBinary(const UA_AvailabilityDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_AvailabilityDataType_encodeBinary(const UA_AvailabilityDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AvailabilityDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AvailabilityDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE], NULL);
}

/* RotaryModeDataType */
static UA_INLINE size_t
UA_RotaryModeDataType_calcSizeBinary(const UA_RotaryModeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_RotaryModeDataType_encodeBinary(const UA_RotaryModeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RotaryModeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RotaryModeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE], NULL);
}

/* InterfaceStateDataType */
static UA_INLINE size_t
UA_InterfaceStateDataType_calcSizeBinary(const UA_InterfaceStateDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_InterfaceStateDataType_encodeBinary(const UA_InterfaceStateDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_InterfaceStateDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_InterfaceStateDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE], NULL);
}

/* ThreeSpaceSampleDataType */
static UA_INLINE size_t
UA_ThreeSpaceSampleDataType_calcSizeBinary(const UA_ThreeSpaceSampleDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ThreeSpaceSampleDataType_encodeBinary(const UA_ThreeSpaceSampleDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ThreeSpaceSampleDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ThreeSpaceSampleDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE], NULL);
}

/* QualifierDataType */
static UA_INLINE size_t
UA_QualifierDataType_calcSizeBinary(const UA_QualifierDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_QUALIFIERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_QualifierDataType_encodeBinary(const UA_QualifierDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_QUALIFIERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QualifierDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QualifierDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_QUALIFIERDATATYPE], NULL);
}
