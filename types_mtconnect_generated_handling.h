/* Generated from MTConnect.TypeDictionary.Binary.xml with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host SY-MacBook-Pro.local by user simon at 2020-02-06 04:44:45 */

#ifndef TYPES_MTCONNECT_GENERATED_HANDLING_H_
#define TYPES_MTCONNECT_GENERATED_HANDLING_H_

#include "types_mtconnect_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* InterfaceStatusDataType */
static UA_INLINE void
UA_InterfaceStatusDataType_init(UA_InterfaceStatusDataType *p) {
    memset(p, 0, sizeof(UA_InterfaceStatusDataType));
}

static UA_INLINE UA_InterfaceStatusDataType *
UA_InterfaceStatusDataType_new(void) {
    return (UA_InterfaceStatusDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_InterfaceStatusDataType_copy(const UA_InterfaceStatusDataType *src, UA_InterfaceStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE]);
}

static UA_INLINE void
UA_InterfaceStatusDataType_deleteMembers(UA_InterfaceStatusDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE]);
}

static UA_INLINE void
UA_InterfaceStatusDataType_clear(UA_InterfaceStatusDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE]);
}

static UA_INLINE void
UA_InterfaceStatusDataType_delete(UA_InterfaceStatusDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE]);
}

/* AssetEventDataType */
static UA_INLINE void
UA_AssetEventDataType_init(UA_AssetEventDataType *p) {
    memset(p, 0, sizeof(UA_AssetEventDataType));
}

static UA_INLINE UA_AssetEventDataType *
UA_AssetEventDataType_new(void) {
    return (UA_AssetEventDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_AssetEventDataType_copy(const UA_AssetEventDataType *src, UA_AssetEventDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE]);
}

static UA_INLINE void
UA_AssetEventDataType_deleteMembers(UA_AssetEventDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE]);
}

static UA_INLINE void
UA_AssetEventDataType_clear(UA_AssetEventDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE]);
}

static UA_INLINE void
UA_AssetEventDataType_delete(UA_AssetEventDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE]);
}

/* MTStatisticType */
static UA_INLINE void
UA_MTStatisticType_init(UA_MTStatisticType *p) {
    memset(p, 0, sizeof(UA_MTStatisticType));
}

static UA_INLINE UA_MTStatisticType *
UA_MTStatisticType_new(void) {
    return (UA_MTStatisticType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSTATISTICTYPE]);
}

static UA_INLINE UA_StatusCode
UA_MTStatisticType_copy(const UA_MTStatisticType *src, UA_MTStatisticType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSTATISTICTYPE]);
}

static UA_INLINE void
UA_MTStatisticType_deleteMembers(UA_MTStatisticType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSTATISTICTYPE]);
}

static UA_INLINE void
UA_MTStatisticType_clear(UA_MTStatisticType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSTATISTICTYPE]);
}

static UA_INLINE void
UA_MTStatisticType_delete(UA_MTStatisticType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSTATISTICTYPE]);
}

/* MTResetTriggerType */
static UA_INLINE void
UA_MTResetTriggerType_init(UA_MTResetTriggerType *p) {
    memset(p, 0, sizeof(UA_MTResetTriggerType));
}

static UA_INLINE UA_MTResetTriggerType *
UA_MTResetTriggerType_new(void) {
    return (UA_MTResetTriggerType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE]);
}

static UA_INLINE UA_StatusCode
UA_MTResetTriggerType_copy(const UA_MTResetTriggerType *src, UA_MTResetTriggerType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE]);
}

static UA_INLINE void
UA_MTResetTriggerType_deleteMembers(UA_MTResetTriggerType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE]);
}

static UA_INLINE void
UA_MTResetTriggerType_clear(UA_MTResetTriggerType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE]);
}

static UA_INLINE void
UA_MTResetTriggerType_delete(UA_MTResetTriggerType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE]);
}

/* MessageDataType */
static UA_INLINE void
UA_MessageDataType_init(UA_MessageDataType *p) {
    memset(p, 0, sizeof(UA_MessageDataType));
}

static UA_INLINE UA_MessageDataType *
UA_MessageDataType_new(void) {
    return (UA_MessageDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MessageDataType_copy(const UA_MessageDataType *src, UA_MessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_deleteMembers(UA_MessageDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_clear(UA_MessageDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_delete(UA_MessageDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MESSAGEDATATYPE]);
}

/* EmergencyStopDataType */
static UA_INLINE void
UA_EmergencyStopDataType_init(UA_EmergencyStopDataType *p) {
    memset(p, 0, sizeof(UA_EmergencyStopDataType));
}

static UA_INLINE UA_EmergencyStopDataType *
UA_EmergencyStopDataType_new(void) {
    return (UA_EmergencyStopDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EmergencyStopDataType_copy(const UA_EmergencyStopDataType *src, UA_EmergencyStopDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE]);
}

static UA_INLINE void
UA_EmergencyStopDataType_deleteMembers(UA_EmergencyStopDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE]);
}

static UA_INLINE void
UA_EmergencyStopDataType_clear(UA_EmergencyStopDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE]);
}

static UA_INLINE void
UA_EmergencyStopDataType_delete(UA_EmergencyStopDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE]);
}

/* OpenStateDataType */
static UA_INLINE void
UA_OpenStateDataType_init(UA_OpenStateDataType *p) {
    memset(p, 0, sizeof(UA_OpenStateDataType));
}

static UA_INLINE UA_OpenStateDataType *
UA_OpenStateDataType_new(void) {
    return (UA_OpenStateDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_OPENSTATEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_OpenStateDataType_copy(const UA_OpenStateDataType *src, UA_OpenStateDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_OPENSTATEDATATYPE]);
}

static UA_INLINE void
UA_OpenStateDataType_deleteMembers(UA_OpenStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_OPENSTATEDATATYPE]);
}

static UA_INLINE void
UA_OpenStateDataType_clear(UA_OpenStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_OPENSTATEDATATYPE]);
}

static UA_INLINE void
UA_OpenStateDataType_delete(UA_OpenStateDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_OPENSTATEDATATYPE]);
}

/* OnOffDataType */
static UA_INLINE void
UA_OnOffDataType_init(UA_OnOffDataType *p) {
    memset(p, 0, sizeof(UA_OnOffDataType));
}

static UA_INLINE UA_OnOffDataType *
UA_OnOffDataType_new(void) {
    return (UA_OnOffDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ONOFFDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_OnOffDataType_copy(const UA_OnOffDataType *src, UA_OnOffDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ONOFFDATATYPE]);
}

static UA_INLINE void
UA_OnOffDataType_deleteMembers(UA_OnOffDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ONOFFDATATYPE]);
}

static UA_INLINE void
UA_OnOffDataType_clear(UA_OnOffDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ONOFFDATATYPE]);
}

static UA_INLINE void
UA_OnOffDataType_delete(UA_OnOffDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ONOFFDATATYPE]);
}

/* AxisCouplingDataType */
static UA_INLINE void
UA_AxisCouplingDataType_init(UA_AxisCouplingDataType *p) {
    memset(p, 0, sizeof(UA_AxisCouplingDataType));
}

static UA_INLINE UA_AxisCouplingDataType *
UA_AxisCouplingDataType_new(void) {
    return (UA_AxisCouplingDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_AxisCouplingDataType_copy(const UA_AxisCouplingDataType *src, UA_AxisCouplingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE]);
}

static UA_INLINE void
UA_AxisCouplingDataType_deleteMembers(UA_AxisCouplingDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE]);
}

static UA_INLINE void
UA_AxisCouplingDataType_clear(UA_AxisCouplingDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE]);
}

static UA_INLINE void
UA_AxisCouplingDataType_delete(UA_AxisCouplingDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE]);
}

/* FunctionalModeDataType */
static UA_INLINE void
UA_FunctionalModeDataType_init(UA_FunctionalModeDataType *p) {
    memset(p, 0, sizeof(UA_FunctionalModeDataType));
}

static UA_INLINE UA_FunctionalModeDataType *
UA_FunctionalModeDataType_new(void) {
    return (UA_FunctionalModeDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_FunctionalModeDataType_copy(const UA_FunctionalModeDataType *src, UA_FunctionalModeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE]);
}

static UA_INLINE void
UA_FunctionalModeDataType_deleteMembers(UA_FunctionalModeDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE]);
}

static UA_INLINE void
UA_FunctionalModeDataType_clear(UA_FunctionalModeDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE]);
}

static UA_INLINE void
UA_FunctionalModeDataType_delete(UA_FunctionalModeDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE]);
}

/* ActiveStateDataType */
static UA_INLINE void
UA_ActiveStateDataType_init(UA_ActiveStateDataType *p) {
    memset(p, 0, sizeof(UA_ActiveStateDataType));
}

static UA_INLINE UA_ActiveStateDataType *
UA_ActiveStateDataType_new(void) {
    return (UA_ActiveStateDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ActiveStateDataType_copy(const UA_ActiveStateDataType *src, UA_ActiveStateDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE]);
}

static UA_INLINE void
UA_ActiveStateDataType_deleteMembers(UA_ActiveStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE]);
}

static UA_INLINE void
UA_ActiveStateDataType_clear(UA_ActiveStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE]);
}

static UA_INLINE void
UA_ActiveStateDataType_delete(UA_ActiveStateDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE]);
}

/* AxisStateDataType */
static UA_INLINE void
UA_AxisStateDataType_init(UA_AxisStateDataType *p) {
    memset(p, 0, sizeof(UA_AxisStateDataType));
}

static UA_INLINE UA_AxisStateDataType *
UA_AxisStateDataType_new(void) {
    return (UA_AxisStateDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISSTATEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_AxisStateDataType_copy(const UA_AxisStateDataType *src, UA_AxisStateDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISSTATEDATATYPE]);
}

static UA_INLINE void
UA_AxisStateDataType_deleteMembers(UA_AxisStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISSTATEDATATYPE]);
}

static UA_INLINE void
UA_AxisStateDataType_clear(UA_AxisStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISSTATEDATATYPE]);
}

static UA_INLINE void
UA_AxisStateDataType_delete(UA_AxisStateDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AXISSTATEDATATYPE]);
}

/* MTCategoryType */
static UA_INLINE void
UA_MTCategoryType_init(UA_MTCategoryType *p) {
    memset(p, 0, sizeof(UA_MTCategoryType));
}

static UA_INLINE UA_MTCategoryType *
UA_MTCategoryType_new(void) {
    return (UA_MTCategoryType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCATEGORYTYPE]);
}

static UA_INLINE UA_StatusCode
UA_MTCategoryType_copy(const UA_MTCategoryType *src, UA_MTCategoryType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCATEGORYTYPE]);
}

static UA_INLINE void
UA_MTCategoryType_deleteMembers(UA_MTCategoryType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCATEGORYTYPE]);
}

static UA_INLINE void
UA_MTCategoryType_clear(UA_MTCategoryType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCATEGORYTYPE]);
}

static UA_INLINE void
UA_MTCategoryType_delete(UA_MTCategoryType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCATEGORYTYPE]);
}

/* CompositionStateDataType */
static UA_INLINE void
UA_CompositionStateDataType_init(UA_CompositionStateDataType *p) {
    memset(p, 0, sizeof(UA_CompositionStateDataType));
}

static UA_INLINE UA_CompositionStateDataType *
UA_CompositionStateDataType_new(void) {
    return (UA_CompositionStateDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CompositionStateDataType_copy(const UA_CompositionStateDataType *src, UA_CompositionStateDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE]);
}

static UA_INLINE void
UA_CompositionStateDataType_deleteMembers(UA_CompositionStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE]);
}

static UA_INLINE void
UA_CompositionStateDataType_clear(UA_CompositionStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE]);
}

static UA_INLINE void
UA_CompositionStateDataType_delete(UA_CompositionStateDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE]);
}

/* ProgramEditDataType */
static UA_INLINE void
UA_ProgramEditDataType_init(UA_ProgramEditDataType *p) {
    memset(p, 0, sizeof(UA_ProgramEditDataType));
}

static UA_INLINE UA_ProgramEditDataType *
UA_ProgramEditDataType_new(void) {
    return (UA_ProgramEditDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ProgramEditDataType_copy(const UA_ProgramEditDataType *src, UA_ProgramEditDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE]);
}

static UA_INLINE void
UA_ProgramEditDataType_deleteMembers(UA_ProgramEditDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE]);
}

static UA_INLINE void
UA_ProgramEditDataType_clear(UA_ProgramEditDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE]);
}

static UA_INLINE void
UA_ProgramEditDataType_delete(UA_ProgramEditDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE]);
}

/* DirectionDataType */
static UA_INLINE void
UA_DirectionDataType_init(UA_DirectionDataType *p) {
    memset(p, 0, sizeof(UA_DirectionDataType));
}

static UA_INLINE UA_DirectionDataType *
UA_DirectionDataType_new(void) {
    return (UA_DirectionDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_DIRECTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DirectionDataType_copy(const UA_DirectionDataType *src, UA_DirectionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_DIRECTIONDATATYPE]);
}

static UA_INLINE void
UA_DirectionDataType_deleteMembers(UA_DirectionDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_DIRECTIONDATATYPE]);
}

static UA_INLINE void
UA_DirectionDataType_clear(UA_DirectionDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_DIRECTIONDATATYPE]);
}

static UA_INLINE void
UA_DirectionDataType_delete(UA_DirectionDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_DIRECTIONDATATYPE]);
}

/* MTSeverityDataType */
static UA_INLINE void
UA_MTSeverityDataType_init(UA_MTSeverityDataType *p) {
    memset(p, 0, sizeof(UA_MTSeverityDataType));
}

static UA_INLINE UA_MTSeverityDataType *
UA_MTSeverityDataType_new(void) {
    return (UA_MTSeverityDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MTSeverityDataType_copy(const UA_MTSeverityDataType *src, UA_MTSeverityDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE]);
}

static UA_INLINE void
UA_MTSeverityDataType_deleteMembers(UA_MTSeverityDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE]);
}

static UA_INLINE void
UA_MTSeverityDataType_clear(UA_MTSeverityDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE]);
}

static UA_INLINE void
UA_MTSeverityDataType_delete(UA_MTSeverityDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE]);
}

/* ExecutionDataType */
static UA_INLINE void
UA_ExecutionDataType_init(UA_ExecutionDataType *p) {
    memset(p, 0, sizeof(UA_ExecutionDataType));
}

static UA_INLINE UA_ExecutionDataType *
UA_ExecutionDataType_new(void) {
    return (UA_ExecutionDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EXECUTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ExecutionDataType_copy(const UA_ExecutionDataType *src, UA_ExecutionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EXECUTIONDATATYPE]);
}

static UA_INLINE void
UA_ExecutionDataType_deleteMembers(UA_ExecutionDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EXECUTIONDATATYPE]);
}

static UA_INLINE void
UA_ExecutionDataType_clear(UA_ExecutionDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EXECUTIONDATATYPE]);
}

static UA_INLINE void
UA_ExecutionDataType_delete(UA_ExecutionDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_EXECUTIONDATATYPE]);
}

/* ControllerModeDataType */
static UA_INLINE void
UA_ControllerModeDataType_init(UA_ControllerModeDataType *p) {
    memset(p, 0, sizeof(UA_ControllerModeDataType));
}

static UA_INLINE UA_ControllerModeDataType *
UA_ControllerModeDataType_new(void) {
    return (UA_ControllerModeDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ControllerModeDataType_copy(const UA_ControllerModeDataType *src, UA_ControllerModeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE]);
}

static UA_INLINE void
UA_ControllerModeDataType_deleteMembers(UA_ControllerModeDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE]);
}

static UA_INLINE void
UA_ControllerModeDataType_clear(UA_ControllerModeDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE]);
}

static UA_INLINE void
UA_ControllerModeDataType_delete(UA_ControllerModeDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE]);
}

/* PathModeDataType */
static UA_INLINE void
UA_PathModeDataType_init(UA_PathModeDataType *p) {
    memset(p, 0, sizeof(UA_PathModeDataType));
}

static UA_INLINE UA_PathModeDataType *
UA_PathModeDataType_new(void) {
    return (UA_PathModeDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PATHMODEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PathModeDataType_copy(const UA_PathModeDataType *src, UA_PathModeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PATHMODEDATATYPE]);
}

static UA_INLINE void
UA_PathModeDataType_deleteMembers(UA_PathModeDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PATHMODEDATATYPE]);
}

static UA_INLINE void
UA_PathModeDataType_clear(UA_PathModeDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PATHMODEDATATYPE]);
}

static UA_INLINE void
UA_PathModeDataType_delete(UA_PathModeDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_PATHMODEDATATYPE]);
}

/* MTRepresentationType */
static UA_INLINE void
UA_MTRepresentationType_init(UA_MTRepresentationType *p) {
    memset(p, 0, sizeof(UA_MTRepresentationType));
}

static UA_INLINE UA_MTRepresentationType *
UA_MTRepresentationType_new(void) {
    return (UA_MTRepresentationType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE]);
}

static UA_INLINE UA_StatusCode
UA_MTRepresentationType_copy(const UA_MTRepresentationType *src, UA_MTRepresentationType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE]);
}

static UA_INLINE void
UA_MTRepresentationType_deleteMembers(UA_MTRepresentationType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE]);
}

static UA_INLINE void
UA_MTRepresentationType_clear(UA_MTRepresentationType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE]);
}

static UA_INLINE void
UA_MTRepresentationType_delete(UA_MTRepresentationType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE]);
}

/* MTCoordinateSystemType */
static UA_INLINE void
UA_MTCoordinateSystemType_init(UA_MTCoordinateSystemType *p) {
    memset(p, 0, sizeof(UA_MTCoordinateSystemType));
}

static UA_INLINE UA_MTCoordinateSystemType *
UA_MTCoordinateSystemType_new(void) {
    return (UA_MTCoordinateSystemType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE]);
}

static UA_INLINE UA_StatusCode
UA_MTCoordinateSystemType_copy(const UA_MTCoordinateSystemType *src, UA_MTCoordinateSystemType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE]);
}

static UA_INLINE void
UA_MTCoordinateSystemType_deleteMembers(UA_MTCoordinateSystemType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE]);
}

static UA_INLINE void
UA_MTCoordinateSystemType_clear(UA_MTCoordinateSystemType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE]);
}

static UA_INLINE void
UA_MTCoordinateSystemType_delete(UA_MTCoordinateSystemType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE]);
}

/* YesNoDataType */
static UA_INLINE void
UA_YesNoDataType_init(UA_YesNoDataType *p) {
    memset(p, 0, sizeof(UA_YesNoDataType));
}

static UA_INLINE UA_YesNoDataType *
UA_YesNoDataType_new(void) {
    return (UA_YesNoDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_YESNODATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_YesNoDataType_copy(const UA_YesNoDataType *src, UA_YesNoDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_YESNODATATYPE]);
}

static UA_INLINE void
UA_YesNoDataType_deleteMembers(UA_YesNoDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_YESNODATATYPE]);
}

static UA_INLINE void
UA_YesNoDataType_clear(UA_YesNoDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_YESNODATATYPE]);
}

static UA_INLINE void
UA_YesNoDataType_delete(UA_YesNoDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_YESNODATATYPE]);
}

/* AvailabilityDataType */
static UA_INLINE void
UA_AvailabilityDataType_init(UA_AvailabilityDataType *p) {
    memset(p, 0, sizeof(UA_AvailabilityDataType));
}

static UA_INLINE UA_AvailabilityDataType *
UA_AvailabilityDataType_new(void) {
    return (UA_AvailabilityDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_AvailabilityDataType_copy(const UA_AvailabilityDataType *src, UA_AvailabilityDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE]);
}

static UA_INLINE void
UA_AvailabilityDataType_deleteMembers(UA_AvailabilityDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE]);
}

static UA_INLINE void
UA_AvailabilityDataType_clear(UA_AvailabilityDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE]);
}

static UA_INLINE void
UA_AvailabilityDataType_delete(UA_AvailabilityDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE]);
}

/* RotaryModeDataType */
static UA_INLINE void
UA_RotaryModeDataType_init(UA_RotaryModeDataType *p) {
    memset(p, 0, sizeof(UA_RotaryModeDataType));
}

static UA_INLINE UA_RotaryModeDataType *
UA_RotaryModeDataType_new(void) {
    return (UA_RotaryModeDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_RotaryModeDataType_copy(const UA_RotaryModeDataType *src, UA_RotaryModeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE]);
}

static UA_INLINE void
UA_RotaryModeDataType_deleteMembers(UA_RotaryModeDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE]);
}

static UA_INLINE void
UA_RotaryModeDataType_clear(UA_RotaryModeDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE]);
}

static UA_INLINE void
UA_RotaryModeDataType_delete(UA_RotaryModeDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE]);
}

/* InterfaceStateDataType */
static UA_INLINE void
UA_InterfaceStateDataType_init(UA_InterfaceStateDataType *p) {
    memset(p, 0, sizeof(UA_InterfaceStateDataType));
}

static UA_INLINE UA_InterfaceStateDataType *
UA_InterfaceStateDataType_new(void) {
    return (UA_InterfaceStateDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_InterfaceStateDataType_copy(const UA_InterfaceStateDataType *src, UA_InterfaceStateDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE]);
}

static UA_INLINE void
UA_InterfaceStateDataType_deleteMembers(UA_InterfaceStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE]);
}

static UA_INLINE void
UA_InterfaceStateDataType_clear(UA_InterfaceStateDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE]);
}

static UA_INLINE void
UA_InterfaceStateDataType_delete(UA_InterfaceStateDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE]);
}

/* ThreeSpaceSampleDataType */
static UA_INLINE void
UA_ThreeSpaceSampleDataType_init(UA_ThreeSpaceSampleDataType *p) {
    memset(p, 0, sizeof(UA_ThreeSpaceSampleDataType));
}

static UA_INLINE UA_ThreeSpaceSampleDataType *
UA_ThreeSpaceSampleDataType_new(void) {
    return (UA_ThreeSpaceSampleDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ThreeSpaceSampleDataType_copy(const UA_ThreeSpaceSampleDataType *src, UA_ThreeSpaceSampleDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE]);
}

static UA_INLINE void
UA_ThreeSpaceSampleDataType_deleteMembers(UA_ThreeSpaceSampleDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE]);
}

static UA_INLINE void
UA_ThreeSpaceSampleDataType_clear(UA_ThreeSpaceSampleDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE]);
}

static UA_INLINE void
UA_ThreeSpaceSampleDataType_delete(UA_ThreeSpaceSampleDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE]);
}

/* QualifierDataType */
static UA_INLINE void
UA_QualifierDataType_init(UA_QualifierDataType *p) {
    memset(p, 0, sizeof(UA_QualifierDataType));
}

static UA_INLINE UA_QualifierDataType *
UA_QualifierDataType_new(void) {
    return (UA_QualifierDataType*)UA_new(&UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_QUALIFIERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_QualifierDataType_copy(const UA_QualifierDataType *src, UA_QualifierDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_QUALIFIERDATATYPE]);
}

static UA_INLINE void
UA_QualifierDataType_deleteMembers(UA_QualifierDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_QUALIFIERDATATYPE]);
}

static UA_INLINE void
UA_QualifierDataType_clear(UA_QualifierDataType *p) {
    UA_clear(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_QUALIFIERDATATYPE]);
}

static UA_INLINE void
UA_QualifierDataType_delete(UA_QualifierDataType *p) {
    UA_delete(p, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_QUALIFIERDATATYPE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_MTCONNECT_GENERATED_HANDLING_H_ */
