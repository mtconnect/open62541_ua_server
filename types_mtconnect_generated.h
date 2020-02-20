/* Generated from MTConnect.TypeDictionary.Binary.xml with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host SY-MacBook-Pro.local by user simon at 2020-02-06 04:44:45 */

#ifndef TYPES_MTCONNECT_GENERATED_H_
#define TYPES_MTCONNECT_GENERATED_H_

#ifdef UA_ENABLE_AMALGAMATION
#include "open62541.h"
#else
#include <open62541/types.h>
#include <open62541/types_generated.h>

#endif

_UA_BEGIN_DECLS


/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_TYPES_MTCONNECT_COUNT 28
extern UA_EXPORT const UA_DataType UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_COUNT];

/**
 * InterfaceStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_INTERFACESTATUSDATATYPE_DISABLED = 0,
    UA_INTERFACESTATUSDATATYPE_ENABLED = 1,
    __UA_INTERFACESTATUSDATATYPE_FORCE32BIT = 0x7fffffff
} UA_InterfaceStatusDataType;
UA_STATIC_ASSERT(sizeof(UA_InterfaceStatusDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_INTERFACESTATUSDATATYPE 0

/**
 * AssetEventDataType
 * ^^^^^^^^^^^^^^^^^^
 * The encoding for AssetEventDataType */
typedef struct {
    UA_String assetId;
    UA_String assetType;
} UA_AssetEventDataType;

#define UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE 1

/**
 * MTStatisticType
 * ^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MTSTATISTICTYPE_AVERAGE = 0,
    UA_MTSTATISTICTYPE_MAXIMUM = 1,
    UA_MTSTATISTICTYPE_MEDIAN = 2,
    UA_MTSTATISTICTYPE_MINIMUM = 3,
    UA_MTSTATISTICTYPE_MODE = 4,
    UA_MTSTATISTICTYPE_RANGE = 5,
    UA_MTSTATISTICTYPE_ROOT_MEAN_SQUARE = 6,
    UA_MTSTATISTICTYPE_STANDARD_DEVIATION = 7,
    __UA_MTSTATISTICTYPE_FORCE32BIT = 0x7fffffff
} UA_MTStatisticType;
UA_STATIC_ASSERT(sizeof(UA_MTStatisticType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_MTSTATISTICTYPE 2

/**
 * MTResetTriggerType
 * ^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MTRESETTRIGGERTYPE_ACTION_COMPLETE = 0,
    UA_MTRESETTRIGGERTYPE_ANNUAL = 1,
    UA_MTRESETTRIGGERTYPE_DAY = 2,
    UA_MTRESETTRIGGERTYPE_MAINTENANCE = 3,
    UA_MTRESETTRIGGERTYPE_MANUAL = 4,
    UA_MTRESETTRIGGERTYPE_MONTH = 5,
    UA_MTRESETTRIGGERTYPE_POWER_ON = 6,
    UA_MTRESETTRIGGERTYPE_SHIFT = 7,
    UA_MTRESETTRIGGERTYPE_WEEK = 8,
    __UA_MTRESETTRIGGERTYPE_FORCE32BIT = 0x7fffffff
} UA_MTResetTriggerType;
UA_STATIC_ASSERT(sizeof(UA_MTResetTriggerType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_MTRESETTRIGGERTYPE 3

/**
 * MessageDataType
 * ^^^^^^^^^^^^^^^
 * The encoding for MessageDataType */
typedef struct {
    UA_String nativeCode;
    UA_String text;
} UA_MessageDataType;

#define UA_TYPES_MTCONNECT_MESSAGEDATATYPE 4

/**
 * EmergencyStopDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_EMERGENCYSTOPDATATYPE_ARMED = 0,
    UA_EMERGENCYSTOPDATATYPE_TRIGGERED = 1,
    __UA_EMERGENCYSTOPDATATYPE_FORCE32BIT = 0x7fffffff
} UA_EmergencyStopDataType;
UA_STATIC_ASSERT(sizeof(UA_EmergencyStopDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_EMERGENCYSTOPDATATYPE 5

/**
 * OpenStateDataType
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_OPENSTATEDATATYPE_CLOSED = 0,
    UA_OPENSTATEDATATYPE_OPEN = 1,
    UA_OPENSTATEDATATYPE_UNLATCHED = 2,
    __UA_OPENSTATEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_OpenStateDataType;
UA_STATIC_ASSERT(sizeof(UA_OpenStateDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_OPENSTATEDATATYPE 6

/**
 * OnOffDataType
 * ^^^^^^^^^^^^^
 */
typedef enum {
    UA_ONOFFDATATYPE_OFF = 0,
    UA_ONOFFDATATYPE_ON = 1,
    __UA_ONOFFDATATYPE_FORCE32BIT = 0x7fffffff
} UA_OnOffDataType;
UA_STATIC_ASSERT(sizeof(UA_OnOffDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_ONOFFDATATYPE 7

/**
 * AxisCouplingDataType
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_AXISCOUPLINGDATATYPE_MASTER = 0,
    UA_AXISCOUPLINGDATATYPE_SLAVE = 1,
    UA_AXISCOUPLINGDATATYPE_SYNCHRONOUS = 2,
    UA_AXISCOUPLINGDATATYPE_TANDEM = 3,
    __UA_AXISCOUPLINGDATATYPE_FORCE32BIT = 0x7fffffff
} UA_AxisCouplingDataType;
UA_STATIC_ASSERT(sizeof(UA_AxisCouplingDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_AXISCOUPLINGDATATYPE 8

/**
 * FunctionalModeDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_FUNCTIONALMODEDATATYPE_MAINTENANCE = 0,
    UA_FUNCTIONALMODEDATATYPE_PRODUCTION = 1,
    UA_FUNCTIONALMODEDATATYPE_PROCESS_DEVELOPMENT = 2,
    UA_FUNCTIONALMODEDATATYPE_SETUP = 3,
    UA_FUNCTIONALMODEDATATYPE_TEARDOWN = 4,
    __UA_FUNCTIONALMODEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_FunctionalModeDataType;
UA_STATIC_ASSERT(sizeof(UA_FunctionalModeDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_FUNCTIONALMODEDATATYPE 9

/**
 * ActiveStateDataType
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_ACTIVESTATEDATATYPE_ACTIVE = 0,
    UA_ACTIVESTATEDATATYPE_INACTIVE = 1,
    __UA_ACTIVESTATEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_ActiveStateDataType;
UA_STATIC_ASSERT(sizeof(UA_ActiveStateDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_ACTIVESTATEDATATYPE 10

/**
 * AxisStateDataType
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_AXISSTATEDATATYPE_HOME = 0,
    UA_AXISSTATEDATATYPE_PARKED = 1,
    UA_AXISSTATEDATATYPE_STOPPED = 2,
    UA_AXISSTATEDATATYPE_TRAVEL = 3,
    __UA_AXISSTATEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_AxisStateDataType;
UA_STATIC_ASSERT(sizeof(UA_AxisStateDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_AXISSTATEDATATYPE 11

/**
 * MTCategoryType
 * ^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MTCATEGORYTYPE_EVENT = 0,
    UA_MTCATEGORYTYPE_CONDITION = 1,
    UA_MTCATEGORYTYPE_SAMPLE = 2,
    __UA_MTCATEGORYTYPE_FORCE32BIT = 0x7fffffff
} UA_MTCategoryType;
UA_STATIC_ASSERT(sizeof(UA_MTCategoryType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_MTCATEGORYTYPE 12

/**
 * CompositionStateDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_COMPOSITIONSTATEDATATYPE_ACTIVE = 0,
    UA_COMPOSITIONSTATEDATATYPE_CLOSED = 1,
    UA_COMPOSITIONSTATEDATATYPE_DOWN = 2,
    UA_COMPOSITIONSTATEDATATYPE_INACTIVE = 3,
    UA_COMPOSITIONSTATEDATATYPE_LEFT = 4,
    UA_COMPOSITIONSTATEDATATYPE_OFF = 5,
    UA_COMPOSITIONSTATEDATATYPE_ON = 6,
    UA_COMPOSITIONSTATEDATATYPE_OPEN = 7,
    UA_COMPOSITIONSTATEDATATYPE_RIGHT = 8,
    UA_COMPOSITIONSTATEDATATYPE_TRANSITIONING = 9,
    UA_COMPOSITIONSTATEDATATYPE_UNLATCHED = 10,
    UA_COMPOSITIONSTATEDATATYPE_UP = 11,
    __UA_COMPOSITIONSTATEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_CompositionStateDataType;
UA_STATIC_ASSERT(sizeof(UA_CompositionStateDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_COMPOSITIONSTATEDATATYPE 13

/**
 * ProgramEditDataType
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_PROGRAMEDITDATATYPE_ACTIVE = 0,
    UA_PROGRAMEDITDATATYPE_NOT_READY = 1,
    UA_PROGRAMEDITDATATYPE_READY = 2,
    __UA_PROGRAMEDITDATATYPE_FORCE32BIT = 0x7fffffff
} UA_ProgramEditDataType;
UA_STATIC_ASSERT(sizeof(UA_ProgramEditDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_PROGRAMEDITDATATYPE 14

/**
 * DirectionDataType
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_DIRECTIONDATATYPE_CLOCKWISE = 0,
    UA_DIRECTIONDATATYPE_COUNTER_CLOCKWISE = 1,
    UA_DIRECTIONDATATYPE_NEGATIVE = 2,
    UA_DIRECTIONDATATYPE_POSITIVE = 3,
    __UA_DIRECTIONDATATYPE_FORCE32BIT = 0x7fffffff
} UA_DirectionDataType;
UA_STATIC_ASSERT(sizeof(UA_DirectionDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_DIRECTIONDATATYPE 15

/**
 * MTSeverityDataType
 * ^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MTSEVERITYDATATYPE_FAULT = 0,
    UA_MTSEVERITYDATATYPE_NORMAL = 1,
    UA_MTSEVERITYDATATYPE_WARNING = 2,
    __UA_MTSEVERITYDATATYPE_FORCE32BIT = 0x7fffffff
} UA_MTSeverityDataType;
UA_STATIC_ASSERT(sizeof(UA_MTSeverityDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE 16

/**
 * ExecutionDataType
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_EXECUTIONDATATYPE_ACTIVE = 0,
    UA_EXECUTIONDATATYPE_FEED_HOLD = 1,
    UA_EXECUTIONDATATYPE_INTERRUPTED = 2,
    UA_EXECUTIONDATATYPE_OPTIONAL_STOP = 3,
    UA_EXECUTIONDATATYPE_READY = 4,
    UA_EXECUTIONDATATYPE_PROGRAM_COMPLETED = 5,
    UA_EXECUTIONDATATYPE_PROGRAM_STOPPED = 6,
    UA_EXECUTIONDATATYPE_STOPPED = 7,
    __UA_EXECUTIONDATATYPE_FORCE32BIT = 0x7fffffff
} UA_ExecutionDataType;
UA_STATIC_ASSERT(sizeof(UA_ExecutionDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_EXECUTIONDATATYPE 17

/**
 * ControllerModeDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_CONTROLLERMODEDATATYPE_AUTOMATIC = 0,
    UA_CONTROLLERMODEDATATYPE_EDIT = 1,
    UA_CONTROLLERMODEDATATYPE_MANUAL = 2,
    UA_CONTROLLERMODEDATATYPE_MANUAL_DATA_INPUT = 3,
    UA_CONTROLLERMODEDATATYPE_SEMI_AUTOMATIC = 4,
    __UA_CONTROLLERMODEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_ControllerModeDataType;
UA_STATIC_ASSERT(sizeof(UA_ControllerModeDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_CONTROLLERMODEDATATYPE 18

/**
 * PathModeDataType
 * ^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_PATHMODEDATATYPE_INDEPENDENT = 0,
    UA_PATHMODEDATATYPE_MASTER = 1,
    UA_PATHMODEDATATYPE_MIRROR = 2,
    UA_PATHMODEDATATYPE_SYNCHRONOUS = 3,
    __UA_PATHMODEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_PathModeDataType;
UA_STATIC_ASSERT(sizeof(UA_PathModeDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_PATHMODEDATATYPE 19

/**
 * MTRepresentationType
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MTREPRESENTATIONTYPE_DISCRETE = 0,
    UA_MTREPRESENTATIONTYPE_TIME_SERIES = 1,
    UA_MTREPRESENTATIONTYPE_VALUE = 2,
    __UA_MTREPRESENTATIONTYPE_FORCE32BIT = 0x7fffffff
} UA_MTRepresentationType;
UA_STATIC_ASSERT(sizeof(UA_MTRepresentationType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_MTREPRESENTATIONTYPE 20

/**
 * MTCoordinateSystemType
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MTCOORDINATESYSTEMTYPE_MACHINE = 0,
    UA_MTCOORDINATESYSTEMTYPE_WORK = 1,
    __UA_MTCOORDINATESYSTEMTYPE_FORCE32BIT = 0x7fffffff
} UA_MTCoordinateSystemType;
UA_STATIC_ASSERT(sizeof(UA_MTCoordinateSystemType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_MTCOORDINATESYSTEMTYPE 21

/**
 * YesNoDataType
 * ^^^^^^^^^^^^^
 */
typedef enum {
    UA_YESNODATATYPE_NO = 0,
    UA_YESNODATATYPE_YES = 1,
    __UA_YESNODATATYPE_FORCE32BIT = 0x7fffffff
} UA_YesNoDataType;
UA_STATIC_ASSERT(sizeof(UA_YesNoDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_YESNODATATYPE 22

/**
 * AvailabilityDataType
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_AVAILABILITYDATATYPE_AVAILABLE = 0,
    UA_AVAILABILITYDATATYPE_UNAVAILABLE = 1,
    __UA_AVAILABILITYDATATYPE_FORCE32BIT = 0x7fffffff
} UA_AvailabilityDataType;
UA_STATIC_ASSERT(sizeof(UA_AvailabilityDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_AVAILABILITYDATATYPE 23

/**
 * RotaryModeDataType
 * ^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_ROTARYMODEDATATYPE_CONTOUR = 0,
    UA_ROTARYMODEDATATYPE_INDEX = 1,
    UA_ROTARYMODEDATATYPE_SPINDLE = 2,
    __UA_ROTARYMODEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_RotaryModeDataType;
UA_STATIC_ASSERT(sizeof(UA_RotaryModeDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_ROTARYMODEDATATYPE 24

/**
 * InterfaceStateDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_INTERFACESTATEDATATYPE_ACTIVE = 0,
    UA_INTERFACESTATEDATATYPE_COMPLETE = 1,
    UA_INTERFACESTATEDATATYPE_FAIL = 2,
    UA_INTERFACESTATEDATATYPE_NOT_READY = 4,
    UA_INTERFACESTATEDATATYPE_READY = 5,
    __UA_INTERFACESTATEDATATYPE_FORCE32BIT = 0x7fffffff
} UA_InterfaceStateDataType;
UA_STATIC_ASSERT(sizeof(UA_InterfaceStateDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_INTERFACESTATEDATATYPE 25

/**
 * ThreeSpaceSampleDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 * The encoding for ThreeSpaceSampleDataType */
typedef struct {
    UA_Double x;
    UA_Double y;
    UA_Double z;
} UA_ThreeSpaceSampleDataType;

#define UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE 26

/**
 * QualifierDataType
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_QUALIFIERDATATYPE_HIGH = 0,
    UA_QUALIFIERDATATYPE_LOW = 1,
    __UA_QUALIFIERDATATYPE_FORCE32BIT = 0x7fffffff
} UA_QualifierDataType;
UA_STATIC_ASSERT(sizeof(UA_QualifierDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MTCONNECT_QUALIFIERDATATYPE 27


_UA_END_DECLS

#endif /* TYPES_MTCONNECT_GENERATED_H_ */
