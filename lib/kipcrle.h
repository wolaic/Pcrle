/******************************************************************************
 *                                                                         
 * (c)2012 Kikusui Electronics Corp. All rights reserved.
 *
 *****************************************************************************/

#ifndef __KIPCRLE_HEADER
#define __KIPCRLE_HEADER

#include <ivivisatype.h>

#if defined(__cplusplus) || defined(__cplusplus__)
extern "C" {
#endif

/**************************************************************************** 
 *---------------------------- Attribute Defines ---------------------------* 
 ****************************************************************************/
#ifndef IVI_ATTR_BASE
#define IVI_ATTR_BASE                 1000000
#endif

#ifndef IVI_INHERENT_ATTR_BASE		        
#define IVI_INHERENT_ATTR_BASE        (IVI_ATTR_BASE +  50000)   /* base for inherent capability attributes */
#endif

#ifndef IVI_CLASS_ATTR_BASE           
#define IVI_CLASS_ATTR_BASE           (IVI_ATTR_BASE + 250000)   /* base for IVI-defined class attributes */
#endif

#ifndef IVI_LXISYNC_ATTR_BASE         
#define IVI_LXISYNC_ATTR_BASE         (IVI_ATTR_BASE + 950000)   /* base for IviLxiSync attributes */
#endif

#ifndef IVI_SPECIFIC_ATTR_BASE        
#define IVI_SPECIFIC_ATTR_BASE        (IVI_ATTR_BASE + 150000)   /* base for attributes of specific drivers */
#endif


/*===== IVI Inherent Instrument Attributes ==============================*/    

/*- Driver Identification */

#define KIPCRLE_ATTR_SPECIFIC_DRIVER_DESCRIPTION              (IVI_INHERENT_ATTR_BASE + 514L)  /* ViString, read-only */
#define KIPCRLE_ATTR_SPECIFIC_DRIVER_PREFIX                   (IVI_INHERENT_ATTR_BASE + 302L)  /* ViString, read-only */
#define KIPCRLE_ATTR_SPECIFIC_DRIVER_VENDOR                   (IVI_INHERENT_ATTR_BASE + 513L)  /* ViString, read-only */
#define KIPCRLE_ATTR_SPECIFIC_DRIVER_REVISION                 (IVI_INHERENT_ATTR_BASE + 551L)  /* ViString, read-only */
#define KIPCRLE_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION (IVI_INHERENT_ATTR_BASE + 515L)  /* ViInt32, read-only */
#define KIPCRLE_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION (IVI_INHERENT_ATTR_BASE + 516L)  /* ViInt32, read-only */

/*- User Options */

#define KIPCRLE_ATTR_RANGE_CHECK                            (IVI_INHERENT_ATTR_BASE + 2L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_QUERY_INSTRUMENT_STATUS                (IVI_INHERENT_ATTR_BASE + 3L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_CACHE                                  (IVI_INHERENT_ATTR_BASE + 4L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_SIMULATE                               (IVI_INHERENT_ATTR_BASE + 5L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_RECORD_COERCIONS                       (IVI_INHERENT_ATTR_BASE + 6L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_INTERCHANGE_CHECK                      (IVI_INHERENT_ATTR_BASE + 21L)  /* ViBoolean, read-write */

/*- Advanced Session Information */

#define KIPCRLE_ATTR_LOGICAL_NAME                           (IVI_INHERENT_ATTR_BASE + 305L)  /* ViString, read-only */
#define KIPCRLE_ATTR_IO_RESOURCE_DESCRIPTOR                 (IVI_INHERENT_ATTR_BASE + 304L)  /* ViString, read-only */
#define KIPCRLE_ATTR_DRIVER_SETUP                           (IVI_INHERENT_ATTR_BASE + 7L)  /* ViString, read-only */

/*- Driver Capabilities */

#define KIPCRLE_ATTR_GROUP_CAPABILITIES                     (IVI_INHERENT_ATTR_BASE + 401L)  /* ViString, read-only */
#define KIPCRLE_ATTR_SUPPORTED_INSTRUMENT_MODELS            (IVI_INHERENT_ATTR_BASE + 327L)  /* ViString, read-only */

/*- Instrument Identification */

#define KIPCRLE_ATTR_INSTRUMENT_FIRMWARE_REVISION           (IVI_INHERENT_ATTR_BASE + 510L)  /* ViString, read-only */
#define KIPCRLE_ATTR_INSTRUMENT_MANUFACTURER                (IVI_INHERENT_ATTR_BASE + 511L)  /* ViString, read-only */
#define KIPCRLE_ATTR_INSTRUMENT_MODEL                       (IVI_INHERENT_ATTR_BASE + 512L)  /* ViString, read-only */


/*===== Instrument-Specific Attributes =====================================*/

/*- NOFUNC Current Ramp */

#define KIPCRLE_ATTR_CURRENT_RAMP_BUSY                      (IVI_CLASS_ATTR_BASE + 38L)  /* ViBoolean, read-only */

/*- Current Protection */

#define KIPCRLE_ATTR_CURRENT_PROTECTION_DELAY               (IVI_CLASS_ATTR_BASE + 23L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_CURRENT_PROTECTION_ENABLED             (IVI_CLASS_ATTR_BASE + 24L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_CURRENT_PROTECTION_THRESHOLD           (IVI_CLASS_ATTR_BASE + 25L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_CURRENT_PROTECTION_TRIPPED             (IVI_CLASS_ATTR_BASE + 26L)  /* ViBoolean, read-only */

/*- Voltage Protection */

#define KIPCRLE_ATTR_OVER_VOLTAGE_PROTECTION_ENABLED        (IVI_CLASS_ATTR_BASE + 27L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_OVER_VOLTAGE_PROTECTION_LIMIT          (IVI_CLASS_ATTR_BASE + 28L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_UNDER_VOLTAGE_PROTECTION_ENABLED       (IVI_CLASS_ATTR_BASE + 29L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_UNDER_VOLTAGE_PROTECTION_LIMIT         (IVI_CLASS_ATTR_BASE + 30L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_VOLTAGE_PROTECTION_TRIPPED             (IVI_CLASS_ATTR_BASE + 31L)  /* ViBoolean, read-only */

/*- DC Generation */

#define KIPCRLE_ATTR_DC_MODE                                (IVI_CLASS_ATTR_BASE + 32L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_DC_VOLTAGE_LEVEL                       (IVI_CLASS_ATTR_BASE + 33L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_DC_RANGE_MIN                           (IVI_CLASS_ATTR_BASE + 40L)  /* ViReal64, read-only */
#define KIPCRLE_ATTR_DC_NUM_RANGES                          (IVI_CLASS_ATTR_BASE + 35L)  /* ViInt32, read-only */
#define KIPCRLE_ATTR_DC_RANGE_MAX                           (IVI_CLASS_ATTR_BASE + 41L)  /* ViReal64, read-only */

/*- Output */

#define KIPCRLE_ATTR_CURRENT_LIMIT                          (IVI_CLASS_ATTR_BASE + 13L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_OUTPUT_ENABLED                         (IVI_CLASS_ATTR_BASE + 14L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_VOLTAGE_LEVEL                          (IVI_CLASS_ATTR_BASE + 16L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_VOLTAGE_RANGE                          (IVI_CLASS_ATTR_BASE + 18L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_VOLTAGE_OFFSET                         (IVI_SPECIFIC_ATTR_BASE + 42L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_VCC_MODE                               (IVI_SPECIFIC_ATTR_BASE + 47L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_VCC_LEVEL                              (IVI_SPECIFIC_ATTR_BASE + 40L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_UVP                                    (IVI_SPECIFIC_ATTR_BASE + 39L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_TRIGGERED_VOLTAGE_OFFSET               (IVI_SPECIFIC_ATTR_BASE + 38L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_TRIGGERED_VOLTAGE_LEVEL                (IVI_SPECIFIC_ATTR_BASE + 37L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_TRIGGERED_FREQUENCY                    (IVI_SPECIFIC_ATTR_BASE + 55L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_TRIGGER_SOURCE_TRANSITION              (IVI_SPECIFIC_ATTR_BASE + 46L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_TRIGGER_SOURCE_ACQUIRE                 (IVI_SPECIFIC_ATTR_BASE + 45L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_SYNC_PHASE                             (IVI_SPECIFIC_ATTR_BASE + 36L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_SYNC_ENABLED                           (IVI_SPECIFIC_ATTR_BASE + 35L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_PEAK_HOLD_TIME                         (IVI_SPECIFIC_ATTR_BASE + 33L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_OVP                                    (IVI_SPECIFIC_ATTR_BASE + 34L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_CURRENT_OFFSET                         (IVI_SPECIFIC_ATTR_BASE + 31L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_CURRENT_LIMIT_BEHAVIOR                 (IVI_SPECIFIC_ATTR_BASE + 44L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_AVERAGE_ENABLED                        (IVI_SPECIFIC_ATTR_BASE + 28L)  /* ViBoolean, read-write */

/*- SoftStart */

#define KIPCRLE_ATTR_SOFT_START_ENABLED                     (IVI_SPECIFIC_ATTR_BASE + 26L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_SOFT_START_RISE_TIME                   (IVI_SPECIFIC_ATTR_BASE + 27L)  /* ViReal64, read-write */

/*- PhaseControl */

#define KIPCRLE_ATTR_ON_PHASE_ENABLED                       (IVI_SPECIFIC_ATTR_BASE + 22L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_OFF_PHASE_ENABLED                      (IVI_SPECIFIC_ATTR_BASE + 23L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_ON_PHASE                               (IVI_SPECIFIC_ATTR_BASE + 24L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_OFF_PHASE                              (IVI_SPECIFIC_ATTR_BASE + 25L)  /* ViReal64, read-write */

/*- Impedance */

#define KIPCRLE_ATTR_IMPEDANCE_RATIO                        (IVI_SPECIFIC_ATTR_BASE + 21L)  /* ViReal64, read-write */

/*- Outputs */

#define KIPCRLE_ATTR_NUM_PHASES                             (IVI_CLASS_ATTR_BASE + 2L)  /* ViInt32, read-only */
#define KIPCRLE_ATTR_FREQUENCY                              (IVI_CLASS_ATTR_BASE + 1L)  /* ViReal64, read-write */

/*- External Sync */

#define KIPCRLE_ATTR_EXTERNAL_SYNC_ENABLED                  (IVI_CLASS_ATTR_BASE + 10L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_EXTERNAL_SYNC_PHASE_OFFSET             (IVI_CLASS_ATTR_BASE + 11L)  /* ViReal64, read-write */

/*- Program */

#define KIPCRLE_ATTR_PROGRAM_LOOP                           (IVI_SPECIFIC_ATTR_BASE + 2L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_PROGRAM_START_POSITION                 (IVI_SPECIFIC_ATTR_BASE + 3L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_PROGRAM_END_POSITION                   (IVI_SPECIFIC_ATTR_BASE + 4L)  /* ViInt32, read-write */

/*- Step */

#define KIPCRLE_ATTR_STEP_COUNT                             (IVI_SPECIFIC_ATTR_BASE + 1L)  /* ViInt32, read-only */

/*- Simulation */

#define KIPCRLE_ATTR_SIMULATION_T1_PHASE                    (IVI_SPECIFIC_ATTR_BASE + 5L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_SIMULATION_T1_PHASE_ENABLED            (IVI_SPECIFIC_ATTR_BASE + 6L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_SIMULATION_T1_TIME                     (IVI_SPECIFIC_ATTR_BASE + 7L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_SIMULATION_T2_TIME                     (IVI_SPECIFIC_ATTR_BASE + 8L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_SIMULATION_T3_TIME                     (IVI_SPECIFIC_ATTR_BASE + 9L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_SIMULATION_T3_VOLTAGE                  (IVI_SPECIFIC_ATTR_BASE + 10L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_SIMULATION_T4_TIME                     (IVI_SPECIFIC_ATTR_BASE + 11L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_SIMULATION_T5_TIME                     (IVI_SPECIFIC_ATTR_BASE + 12L)  /* ViReal64, read-write */
#define KIPCRLE_ATTR_SIMULATION_T5_CYCLE                    (IVI_SPECIFIC_ATTR_BASE + 13L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_SIMULATION_T5_CYCLE_ENABLED            (IVI_SPECIFIC_ATTR_BASE + 14L)  /* ViBoolean, read-write */
#define KIPCRLE_ATTR_SIMULATION_REPEAT_COUNT                (IVI_SPECIFIC_ATTR_BASE + 15L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_SIMULATION_POLARITY                    (IVI_SPECIFIC_ATTR_BASE + 16L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_TRIGGER_SOURCE_SIMULATION              (IVI_SPECIFIC_ATTR_BASE + 17L)  /* ViInt32, read-write */

/*- WaveformBank */

#define KIPCRLE_ATTR_WAVE_BANK_TYPE                         (IVI_SPECIFIC_ATTR_BASE + 18L)  /* ViInt32, read-only */
#define KIPCRLE_ATTR_WAVEFORMBANK_COUNT                     (IVI_SPECIFIC_ATTR_BASE + 19L)  /* ViInt32, read-only */
#define KIPCRLE_ATTR_WAVE_MBANK_SELECTED                    (IVI_SPECIFIC_ATTR_BASE + 20L)  /* ViInt32, read-write */

/*- System */

#define KIPCRLE_ATTR_RESPONSE                               (IVI_SPECIFIC_ATTR_BASE + 49L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_SENSING_MODE                           (IVI_SPECIFIC_ATTR_BASE + 50L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_STATUS_OUTPUT_POLARITY                 (IVI_SPECIFIC_ATTR_BASE + 51L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_TRIGGER_INPUT_POLARITY                 (IVI_SPECIFIC_ATTR_BASE + 52L)  /* ViInt32, read-write */
#define KIPCRLE_ATTR_TRIGGER_OUTPUT_POLARITY                (IVI_SPECIFIC_ATTR_BASE + 53L)  /* ViInt32, read-write */


/**************************************************************************** 
 *------------------------ Attribute Value Defines -------------------------* 
 ****************************************************************************/

/*- Defined values for 
	parameter MeasurementType in function kipcrle_FetchMeasurement */

#define KIPCRLE_VAL_MEASURE_VOLTAGE_RMS_LN                  0
#define KIPCRLE_VAL_MEASURE_CURRENT_RMS                     1
#define KIPCRLE_VAL_MEASURE_FREQUENCY                       2
#define KIPCRLE_VAL_MEASURE_VOLTAGE_DC                      3
#define KIPCRLE_VAL_MEASURE_CURRENT_DC                      4
#define KIPCRLE_VAL_MEASURE_POWER_FACTOR                    5
#define KIPCRLE_VAL_MEASURE_CREST_FACTOR                    6
#define KIPCRLE_VAL_MEASURE_CURRENT_PEAK                    7
#define KIPCRLE_VAL_MEASURE_POWER_VA                        8
#define KIPCRLE_VAL_MEASURE_POWER_REAL                      9
#define KIPCRLE_VAL_MEASURE_POWER_DC                        10
#define KIPCRLE_VAL_MEASURE_VOLTAGE_PEAK                    102
#define KIPCRLE_VAL_MEASURE_CURRENT_PEAK_HOLD               103
#define KIPCRLE_VAL_MEASURE_POWER_REACTIVE                  104

/*- Defined values for 
	parameter Group in function kipcrle_InitiateMeasurement */

#define KIPCRLE_VAL_MEASUREMENT_GROUP_BASE                  1

/*- Defined values for 
	attribute KIPCRLE_ATTR_DC_MODE
	parameter Mode in function kipcrle_ConfigureDC */

#define KIPCRLE_VAL_MODE_AC_ONLY                            0
#define KIPCRLE_VAL_MODE_DC_ONLY                            1
#define KIPCRLE_VAL_MODE_AC_DC                              2

/*- Defined values for */

#define KIPCRLE_VAL_WAVEFORM_CATALOG_FIXED                  0
#define KIPCRLE_VAL_WAVEFORM_CATALOG_USER                   1
#define KIPCRLE_VAL_WAVEFORM_CATALOG_ALL                    2

/*- Defined values for 
	parameter MeasurementType in function kipcrle_FetchMeasurementArray */

#define KIPCRLE_VAL_MEASURE_ARRAY_CURRENT_HARMONIC_ABS      1
#define KIPCRLE_VAL_MEASURE_ARRAY_CURRENT_HARMONIC_PCT      2

/*- Defined values for 
	attribute KIPCRLE_ATTR_TRIGGER_SOURCE_TRANSITION
	attribute KIPCRLE_ATTR_TRIGGER_SOURCE_ACQUIRE
	attribute KIPCRLE_ATTR_TRIGGER_SOURCE_SIMULATION
	parameter TriggerSourceAcquire in function kipcrle_SetTriggerSourceAcquire
	parameter TriggerSourceTransition in function kipcrle_SetTriggerSourceTransition
	parameter TriggerSource in function kipcrle_SetTriggerSourceProgram
	parameter TriggerSource in function kipcrle_SetTriggerSourceSimulation */

#define KIPCRLE_VAL_TRIGGER_SOURCE_IMMEDIATE                0
#define KIPCRLE_VAL_TRIGGER_SOURCE_SW_TRIG_FUNC             2

/*- Defined values for 
	parameter State in function kipcrle_QueryProgramExecutionState
	parameter State in function kipcrle_QuerySimulationExecutionState */

#define KIPCRLE_VAL_EXECUTION_STATE_STOPPED                 0
#define KIPCRLE_VAL_EXECUTION_STATE_RUNNING                 1
#define KIPCRLE_VAL_EXECUTION_STATE_PAUSED                  2

/*- Defined values for 
	parameter State in function kipcrle_ExecutionControl */

#define KIPCRLE_VAL_EXECUTION_CONTROL_STOP                  0
#define KIPCRLE_VAL_EXECUTION_CONTROL_RUN                   1
#define KIPCRLE_VAL_EXECUTION_CONTROL_PAUSE                 2
#define KIPCRLE_VAL_EXECUTION_CONTROL_CONTINUE              3

/*- Defined values for 
	attribute KIPCRLE_ATTR_SIMULATION_POLARITY
	attribute KIPCRLE_ATTR_STATUS_OUTPUT_POLARITY
	attribute KIPCRLE_ATTR_TRIGGER_INPUT_POLARITY
	attribute KIPCRLE_ATTR_TRIGGER_OUTPUT_POLARITY
	parameter Polarity in function kipcrle_ConfigureSimulationPolarity */

#define KIPCRLE_VAL_POLARITY_POSITIVE                       0
#define KIPCRLE_VAL_POLARITY_NEGATIVE                       1

/*- Defined values for 
	attribute KIPCRLE_ATTR_WAVE_BANK_TYPE
	parameter Type in function kipcrle_QueryWaveBankType */

#define KIPCRLE_VAL_WAVE_BANK_TYPE_SINUSOID                 0
#define KIPCRLE_VAL_WAVE_BANK_TYPE_PEAK_CLIP                1
#define KIPCRLE_VAL_WAVE_BANK_TYPE_USER_DATA                2

/*- Defined values for 
	parameter Mode in function kipcrle_ConfigureCouplingMode */

#define KIPCRLE_VAL_COUPLING_MODEAC                         0
#define KIPCRLE_VAL_COUPLING_MODEDC                         1
#define KIPCRLE_VAL_COUPLING_MODEACDC                       2

/*- Defined values for 
	attribute KIPCRLE_ATTR_CURRENT_LIMIT_BEHAVIOR */

#define KIPCRLE_VAL_CURRENT_LIMIT_BEHAVIOR_REGULATE         0
#define KIPCRLE_VAL_CURRENT_LIMIT_BEHAVIOR_TRIP             1

/*- Defined values for 
	attribute KIPCRLE_ATTR_RESPONSE */

#define KIPCRLE_VAL_RESPONSE_SLOW                           0
#define KIPCRLE_VAL_RESPONSE_MEDIUM                         1
#define KIPCRLE_VAL_RESPONSE_FAST                           2

/*- Defined values for 
	attribute KIPCRLE_ATTR_SENSING_MODE */

#define KIPCRLE_VAL_SENSING_MODE_OFF                        0
#define KIPCRLE_VAL_SENSING_MODE_HARDWARE                   1
#define KIPCRLE_VAL_SENSING_MODE_SOFTWARE                   2
#define KIPCRLE_VAL_SENSING_MODE_REGULATION_ADJUST          3

/*- Defined values for 
	parameter SequenceGroup in function kipcrle_Initiate */

#define KIPCRLE_VAL_TRIGGER_SEQUENCE_GROUP_TRANSIENT        1
#define KIPCRLE_VAL_TRIGGER_SEQUENCE_GROUP_ACQUIRE          3
#define KIPCRLE_VAL_TRIGGER_SEQUENCE_GROUP_SIMULATION       4
#define KIPCRLE_VAL_TRIGGER_SEQUENCE_GROUP_PROGRAM          5

/*- Defined values for 
	attribute KIPCRLE_ATTR_VCC_MODE */

#define KIPCRLE_VAL_VCC_MODE_MANUAL                         0
#define KIPCRLE_VAL_VCC_MODE_AUTO                           1

/*- Defined values for 
	parameter Register in function kipcrle_StatusGetRegister
	parameter Register in function kipcrle_StatusSetRegister */

#define KIPCRLE_VAL_SCPI_REGISTER_STATUS_BYTE               0
#define KIPCRLE_VAL_SCPI_REGISTER_STANDARD_EVENT            1
#define KIPCRLE_VAL_SCPI_REGISTER_OPERATION                 2
#define KIPCRLE_VAL_SCPI_REGISTER_QUESTIONABLE              3

/*- Defined values for 
	parameter SubRegister in function kipcrle_StatusGetRegister
	parameter SubRegister in function kipcrle_StatusSetRegister */

#define KIPCRLE_VAL_SCPI_SUB_REGISTER_EVENT                 0
#define KIPCRLE_VAL_SCPI_SUB_REGISTER_CONDITION             1
#define KIPCRLE_VAL_SCPI_SUB_REGISTER_ENABLE                2


/**************************************************************************** 
 *---------------- Instrument Driver Function Declarations -----------------* 
 ****************************************************************************/

/*- KikusuiPcrle */

ViStatus _VI_FUNC kipcrle_init(ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViSession* Vi);
ViStatus _VI_FUNC kipcrle_close(ViSession Vi);
ViStatus _VI_FUNC kipcrle_InitWithOptions(ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViConstString OptionsString, ViSession* Vi);

/*- Utility */

ViStatus _VI_FUNC kipcrle_revision_query(ViSession Vi, ViChar DriverRev[], ViChar InstrRev[]);
ViStatus _VI_FUNC kipcrle_error_message(ViSession Vi, ViStatus ErrorCode, ViChar ErrorMessage[]);
ViStatus _VI_FUNC kipcrle_GetError(ViSession Vi, ViStatus* ErrorCode, ViInt32 ErrorDescriptionBufferSize, ViChar ErrorDescription[]);
ViStatus _VI_FUNC kipcrle_ClearError(ViSession Vi);
ViStatus _VI_FUNC kipcrle_ClearInterchangeWarnings(ViSession Vi);
ViStatus _VI_FUNC kipcrle_GetNextCoercionRecord(ViSession Vi, ViInt32 CoercionRecordBufferSize, ViChar CoercionRecord[]);
ViStatus _VI_FUNC kipcrle_GetNextInterchangeWarning(ViSession Vi, ViInt32 InterchangeWarningBufferSize, ViChar InterchangeWarning[]);
ViStatus _VI_FUNC kipcrle_InvalidateAllAttributes(ViSession Vi);
ViStatus _VI_FUNC kipcrle_ResetInterchangeCheck(ViSession Vi);
ViStatus _VI_FUNC kipcrle_Disable(ViSession Vi);
ViStatus _VI_FUNC kipcrle_error_query(ViSession Vi, ViInt32* ErrorCode, ViChar ErrorMessage[]);
ViStatus _VI_FUNC kipcrle_LockSession(ViSession Vi, ViBoolean* CallerHasLock);
ViStatus _VI_FUNC kipcrle_reset(ViSession Vi);
ViStatus _VI_FUNC kipcrle_ResetWithDefaults(ViSession Vi);
ViStatus _VI_FUNC kipcrle_self_test(ViSession Vi, ViInt16* TestResult, ViChar TestMessage[]);
ViStatus _VI_FUNC kipcrle_UnlockSession(ViSession Vi, ViBoolean* CallerHasLock);

/*- Attribute Accessors */

ViStatus _VI_FUNC kipcrle_GetAttributeViInt32(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue);
ViStatus _VI_FUNC kipcrle_GetAttributeViReal64(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue);
ViStatus _VI_FUNC kipcrle_GetAttributeViBoolean(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue);
ViStatus _VI_FUNC kipcrle_GetAttributeViSession(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue);
ViStatus _VI_FUNC kipcrle_GetAttributeViString(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[]);
ViStatus _VI_FUNC kipcrle_SetAttributeViInt32(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue);
ViStatus _VI_FUNC kipcrle_SetAttributeViReal64(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue);
ViStatus _VI_FUNC kipcrle_SetAttributeViBoolean(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue);
ViStatus _VI_FUNC kipcrle_SetAttributeViSession(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue);
ViStatus _VI_FUNC kipcrle_SetAttributeViString(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue);

/*- Measurement */

ViStatus _VI_FUNC kipcrle_FetchMeasurementArray(ViSession Vi, ViConstString PhaseName, ViInt32 MeasurementType, ViInt32 MeasurementBufferSize, ViReal64 Measurement[], ViInt32* MeasurementActualSize);
ViStatus _VI_FUNC kipcrle_FetchMeasurement(ViSession Vi, ViConstString PhaseName, ViInt32 MeasurementType, ViReal64* Measurement);
ViStatus _VI_FUNC kipcrle_InitiateMeasurement(ViSession Vi, ViInt32 Group);

/*- Current Protection */

ViStatus _VI_FUNC kipcrle_ConfigureCurrentProtection(ViSession Vi, ViConstString PhaseName, ViBoolean Enabled, ViReal64 Threshold, ViReal64 Delay);
ViStatus _VI_FUNC kipcrle_ResetCurrentProtection(ViSession Vi, ViConstString PhaseName);
ViStatus _VI_FUNC kipcrle_QueryCurrentProtectionTripped(ViSession Vi, ViConstString PhaseName, ViBoolean* Tripped);

/*- Voltage Protection */

ViStatus _VI_FUNC kipcrle_ConfigureVoltageProtection(ViSession Vi, ViConstString PhaseName, ViBoolean UnderEnabled, ViBoolean OverEnabled, ViReal64 UnderLimit, ViReal64 OverLimit);
ViStatus _VI_FUNC kipcrle_ResetVoltageProtection(ViSession Vi, ViConstString PhaseName);
ViStatus _VI_FUNC kipcrle_QueryVoltageProtectionTripped(ViSession Vi, ViConstString PhaseName, ViBoolean* Tripped);

/*- DC Generation */

ViStatus _VI_FUNC kipcrle_ConfigureDC(ViSession Vi, ViConstString PhaseName, ViInt32 Mode, ViReal64 DCVoltageLevel);
ViStatus _VI_FUNC kipcrle_QueryDCCapabilities(ViSession Vi, ViConstString PhaseName, ViInt32 Range, ViReal64* Minimum, ViReal64* Maximum);
ViStatus _VI_FUNC kipcrle_ConfigureDCRange(ViSession Vi, ViConstString OutputPhase, ViReal64 Minimum, ViReal64 Maximum);

/*- Output */

ViStatus _VI_FUNC kipcrle_ConfigureCurrentLimit(ViSession Vi, ViConstString PhaseName, ViReal64 Limit);
ViStatus _VI_FUNC kipcrle_ConfigureOutputEnabled(ViSession Vi, ViConstString PhaseName, ViBoolean Enabled);
ViStatus _VI_FUNC kipcrle_ConfigureVoltageRange(ViSession Vi, ViConstString PhaseName, ViReal64 Range);
ViStatus _VI_FUNC kipcrle_ConfigureVoltageLevel(ViSession Vi, ViConstString OutputPhase, ViReal64 VoltageLevel);
ViStatus _VI_FUNC kipcrle_ConfigureCouplingMode(ViSession Vi, ViConstString Output, ViInt32 Mode);
ViStatus _VI_FUNC kipcrle_ConfigureVoltageOffset(ViSession Vi, ViConstString Output, ViReal64 VoltageOffset);
ViStatus _VI_FUNC kipcrle_ConfiguretCurrentOffset(ViSession Vi, ViConstString Output, ViReal64 CurrentOffset);
ViStatus _VI_FUNC kipcrle_ConfigurePeakHoldTime(ViSession Vi, ViConstString Output, ViReal64 HoldTime);
ViStatus _VI_FUNC kipcrle_ConfigureAverageEnabled(ViSession Vi, ViConstString Output, ViBoolean AverageEnabled);

/*- SoftStart */

ViStatus _VI_FUNC kipcrle_SetSoftStartEnabled(ViSession Vi, ViConstString Output, ViBoolean Enabled);
ViStatus _VI_FUNC kipcrle_SetSoftStartRiseTime(ViSession Vi, ViConstString Output, ViReal64 RiseTime);

/*- PhaseControl */

ViStatus _VI_FUNC kipcrle_SetOnEnabled(ViSession Vi, ViConstString Output, ViBoolean OnEnabled);
ViStatus _VI_FUNC kipcrle_SetOffEnabled(ViSession Vi, ViConstString Output, ViBoolean OffEnabled);
ViStatus _VI_FUNC kipcrle_SetOnPhase(ViSession Vi, ViConstString Output, ViReal64 OnPhase);
ViStatus _VI_FUNC kipcrle_SetOffPhase(ViSession Vi, ViConstString Output, ViReal64 OffPhase);

/*- Impedance */

ViStatus _VI_FUNC kipcrle_QueryImpedanceCapabilities(ViSession Vi, ViConstString Output, ViReal64* ResistiveMin, ViReal64* ResistiveMax);
ViStatus _VI_FUNC kipcrle_SetImpedanceEnabled(ViSession Vi, ViConstString Output, ViBoolean Enabled);
ViStatus _VI_FUNC kipcrle_SetImpedanceRatio(ViSession Vi, ViConstString Output, ViReal64 Ratio);
ViStatus _VI_FUNC kipcrle_SetImpedanceResistive(ViSession Vi, ViConstString Output, ViReal64 Resistive);

/*- Outputs */

ViStatus _VI_FUNC kipcrle_GetOutputName(ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[]);
ViStatus _VI_FUNC kipcrle_ConfigureFrequency(ViSession Vi, ViReal64 Frequency);

/*- Triggering */

ViStatus _VI_FUNC kipcrle_ConfigureTriggeredVoltageLevel(ViSession Vi, ViConstString Output, ViReal64 TriggeredVoltageLevel);
ViStatus _VI_FUNC kipcrle_ConfigureTriggeredVoltageOffset(ViSession Vi, ViConstString Output, ViReal64 TriggeredVoltageOffset);
ViStatus _VI_FUNC kipcrle_ConfigureTriggeredFrequency(ViSession Vi, ViReal64 TriggeredFrequency);
ViStatus _VI_FUNC kipcrle_InitiateTransition(ViSession Vi, ViConstString Output);
ViStatus _VI_FUNC kipcrle_SetTriggerSourceAcquire(ViSession Vi, ViConstString Output, ViInt32 TriggerSourceAcquire);
ViStatus _VI_FUNC kipcrle_SetTriggerSourceTransition(ViSession Vi, ViConstString Output, ViInt32 TriggerSourceTransition);

/*- External Sync */

ViStatus _VI_FUNC kipcrle_ConfigureExternalSync(ViSession Vi, ViBoolean Enabled, ViReal64 PhaseOffset);

/*- Program */

ViStatus _VI_FUNC kipcrle_ClearProgram(ViSession Vi);
ViStatus _VI_FUNC kipcrle_QueryProgramExecutionState(ViSession Vi, ViInt32* State, ViReal64* StepElapsedTime, ViInt32* Loop, ViInt32* StepNo);
ViStatus _VI_FUNC kipcrle_ExecutionControl(ViSession Vi, ViInt32 State);
ViStatus _VI_FUNC kipcrle_InitiateProgram(ViSession Vi);
ViStatus _VI_FUNC kipcrle_SetTriggerSourceProgram(ViSession Vi, ViInt32 TriggerSource);
ViStatus _VI_FUNC kipcrle_ConfigureProgramRunningConditions(ViSession Vi, ViInt32 StartPosition, ViInt32 EndPosition, ViInt32 Loop);
ViStatus _VI_FUNC kipcrle_SetEndPosition(ViSession Vi, ViInt32 EndPosition);
ViStatus _VI_FUNC kipcrle_SetLoop(ViSession Vi, ViInt32 Loop);
ViStatus _VI_FUNC kipcrle_SetStartPosition(ViSession Vi, ViInt32 StartPosition);

/*- Step */

ViStatus _VI_FUNC kipcrle_EditJump(ViSession Vi, ViConstString Step, ViBoolean JumpEnabled, ViInt32 JumpStep, ViInt32 JumpCount);
ViStatus _VI_FUNC kipcrle_EditStep(ViSession Vi, ViConstString Step, ViBoolean FreqRampEnabled, ViReal64 Freq, ViBoolean AcvRampEnabled, ViReal64 Acv, ViBoolean DcvRampEnabled, ViReal64 Dcv, ViReal64 Time, ViInt32 WaveBank, ViBoolean StatOut, ViBoolean TrigOut, ViBoolean TrigIn, ViBoolean OutputEnabled);
ViStatus _VI_FUNC kipcrle_QueryEditJump(ViSession Vi, ViConstString Step, ViBoolean* JumpEnabled, ViInt32* JumpStep, ViInt32* JumpCount);
ViStatus _VI_FUNC kipcrle_QueryEditStep(ViSession Vi, ViConstString Step, ViBoolean* FreqRampEnabled, ViReal64* Freq, ViBoolean* AcvRampEnabled, ViReal64* Acv, ViBoolean* DcvRampEnabled, ViReal64* Dcv, ViReal64* Time, ViInt32* WaveBank, ViBoolean* StatOut, ViBoolean* TrigOut, ViBoolean* TrigIn, ViBoolean* OutputEnabled);
ViStatus _VI_FUNC kipcrle_EditPhase(ViSession Vi, ViConstString Step, ViBoolean StartEnabled, ViReal64 StartPhase, ViBoolean StopEnabled, ViReal64 StopPhase, ViBoolean RapidChangeEnabled);
ViStatus _VI_FUNC kipcrle_QueryEditPhase(ViSession Vi, ViConstString Step, ViBoolean* StartEnabled, ViReal64* StartPhase, ViBoolean* StopEnabled, ViReal64* StopPhase, ViBoolean* RapidChangeEnabled);
ViStatus _VI_FUNC kipcrle_EditImpedance(ViSession Vi, ViConstString Step, ViBoolean Enabled, ViReal64 Ratio);
ViStatus _VI_FUNC kipcrle_GetStepName(ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[]);

/*- Simulation */

ViStatus _VI_FUNC kipcrle_QuerySimulationExecutionState(ViSession Vi, ViInt32* State, ViInt32* Loop);
ViStatus _VI_FUNC kipcrle_InitiateSimulation(ViSession Vi);
ViStatus _VI_FUNC kipcrle_SetTriggerSourceSimulation(ViSession Vi, ViInt32 TriggerSource);
ViStatus _VI_FUNC kipcrle_ConfigureSimulationPolarity(ViSession Vi, ViInt32 Polarity);
ViStatus _VI_FUNC kipcrle_ConfigureSimulationRepeatCount(ViSession Vi, ViInt32 RepeatCount);
ViStatus _VI_FUNC kipcrle_ConfigureSimulationT1(ViSession Vi, ViBoolean PhaseEnabled, ViReal64 TimeOrPhase);
ViStatus _VI_FUNC kipcrle_ConfigureSimulationT2(ViSession Vi, ViReal64 Time);
ViStatus _VI_FUNC kipcrle_ConfigureSimulationT3(ViSession Vi, ViReal64 Time, ViReal64 Voltage);
ViStatus _VI_FUNC kipcrle_ConfigureSimulationT4(ViSession Vi, ViReal64 Time);
ViStatus _VI_FUNC kipcrle_ConfigureSimulationT5(ViSession Vi, ViBoolean CycleEnabled, ViReal64 TimeOrCycle);

/*- WaveformBank */

ViStatus _VI_FUNC kipcrle_ConfigureUserData(ViSession Vi, ViConstString WaveformBank, ViInt32 BlockBufferSize, ViInt16 Block[]);
ViStatus _VI_FUNC kipcrle_QueryUserData(ViSession Vi, ViConstString WaveformBank, ViInt32 ValBufferSize, ViInt16 Val[], ViInt32* ValActualSize);
ViStatus _VI_FUNC kipcrle_ConfigurePeakClip(ViSession Vi, ViConstString WaveformBank, ViReal64 CrestFactor);
ViStatus _VI_FUNC kipcrle_QueryPeakClip(ViSession Vi, ViConstString WaveformBank, ViReal64* Val);
ViStatus _VI_FUNC kipcrle_ResetToSinusoid(ViSession Vi, ViConstString WaveformBank);
ViStatus _VI_FUNC kipcrle_GetWaveformBankName(ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[]);
ViStatus _VI_FUNC kipcrle_QueryWaveBankType(ViSession Vi, ViConstString WaveformBank, ViInt32* Type);

/*- Trigger */

ViStatus _VI_FUNC kipcrle_Abort(ViSession Vi);
ViStatus _VI_FUNC kipcrle_SendSoftwareTrigger(ViSession Vi);
ViStatus _VI_FUNC kipcrle_Initiate(ViSession Vi, ViInt32 SequenceGroup);

/*- System */

ViStatus _VI_FUNC kipcrle_SystemRead(ViSession Vi, ViInt32 Size, ViChar Value[], ViInt32* ActualSize);
ViStatus _VI_FUNC kipcrle_SystemWrite(ViSession Vi, ViConstString CommandString);

/*- Status */

ViStatus _VI_FUNC kipcrle_Clear(ViSession Vi);
ViStatus _VI_FUNC kipcrle_Preset(ViSession Vi);
ViStatus _VI_FUNC kipcrle_StatusGetRegister(ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32* Value);
ViStatus _VI_FUNC kipcrle_StatusSetRegister(ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32 Value);

/*- Output */

ViStatus _VI_FUNC kipcrle_QueryCurrentLimitMinMax(ViSession Vi, ViConstString Output, ViReal64* Min, ViReal64* Max);
ViStatus _VI_FUNC kipcrle_QueryCurrentOffsetMinMax(ViSession Vi, ViConstString Output, ViReal64* Min, ViReal64* Max);
ViStatus _VI_FUNC kipcrle_QueryVoltageOffsetMinMax(ViSession Vi, ViConstString Output, ViReal64* Min, ViReal64* Max);
ViStatus _VI_FUNC kipcrle_ResetCurrentPeakHold(ViSession Vi, ViConstString Output2);
ViStatus _VI_FUNC kipcrle_QueryVoltageLevelMinMax(ViSession Vi, ViConstString Output, ViReal64* Min, ViReal64* Max);

/*- Outputs */

ViStatus _VI_FUNC kipcrle_QueryFrequencyMinMax(ViSession Vi, ViReal64* Min, ViReal64* Max);


/**************************************************************************** 
 *----------------- Instrument Error And Completion Codes ------------------* 
 ****************************************************************************/
#ifndef _IVIC_ERROR_BASE_DEFINES_
#define _IVIC_ERROR_BASE_DEFINES_

#define IVIC_WARN_BASE                           (0x3FFA0000L)
#define IVIC_CROSS_CLASS_WARN_BASE               (IVIC_WARN_BASE + 0x1000)
#define IVIC_CLASS_WARN_BASE                     (IVIC_WARN_BASE + 0x2000)
#define IVIC_SPECIFIC_WARN_BASE                  (IVIC_WARN_BASE + 0x4000)

#define IVIC_ERROR_BASE                          (0xBFFA0000L)
#define IVIC_CROSS_CLASS_ERROR_BASE              (IVIC_ERROR_BASE + 0x1000)
#define IVIC_CLASS_ERROR_BASE                    (IVIC_ERROR_BASE + 0x2000)
#define IVIC_SPECIFIC_ERROR_BASE                 (IVIC_ERROR_BASE + 0x4000)
#define IVIC_LXISYNC_ERROR_BASE                  (IVIC_ERROR_BASE + 0x2000)

#endif


#define KIPCRLE_ERROR_CANNOT_RECOVER                        (IVIC_ERROR_BASE + 0x0000)
#define KIPCRLE_ERROR_INSTRUMENT_STATUS                     (IVIC_ERROR_BASE + 0x0001)
#define KIPCRLE_ERROR_CANNOT_OPEN_FILE                      (IVIC_ERROR_BASE + 0x0002)
#define KIPCRLE_ERROR_READING_FILE                          (IVIC_ERROR_BASE + 0x0003)
#define KIPCRLE_ERROR_WRITING_FILE                          (IVIC_ERROR_BASE + 0x0004)
#define KIPCRLE_ERROR_INVALID_PATHNAME                      (IVIC_ERROR_BASE + 0x000B)
#define KIPCRLE_ERROR_INVALID_VALUE                         (IVIC_ERROR_BASE + 0x0010)
#define KIPCRLE_ERROR_FUNCTION_NOT_SUPPORTED                (IVIC_ERROR_BASE + 0x0011)
#define KIPCRLE_ERROR_ATTRIBUTE_NOT_SUPPORTED               (IVIC_ERROR_BASE + 0x0012)
#define KIPCRLE_ERROR_VALUE_NOT_SUPPORTED                   (IVIC_ERROR_BASE + 0x0013)
#define KIPCRLE_ERROR_NOT_INITIALIZED                       (IVIC_ERROR_BASE + 0x001D)
#define KIPCRLE_ERROR_UNKNOWN_CHANNEL_NAME                  (IVIC_ERROR_BASE + 0x0020)
#define KIPCRLE_ERROR_TOO_MANY_OPEN_FILES                   (IVIC_ERROR_BASE + 0x0023)
#define KIPCRLE_ERROR_CHANNEL_NAME_REQUIRED                 (IVIC_ERROR_BASE + 0x0044)
#define KIPCRLE_ERROR_MISSING_OPTION_NAME                   (IVIC_ERROR_BASE + 0x0049)
#define KIPCRLE_ERROR_MISSING_OPTION_VALUE                  (IVIC_ERROR_BASE + 0x004A)
#define KIPCRLE_ERROR_BAD_OPTION_NAME                       (IVIC_ERROR_BASE + 0x004B)
#define KIPCRLE_ERROR_BAD_OPTION_VALUE                      (IVIC_ERROR_BASE + 0x004C)
#define KIPCRLE_ERROR_OUT_OF_MEMORY                         (IVIC_ERROR_BASE + 0x0056)
#define KIPCRLE_ERROR_OPERATION_PENDING                     (IVIC_ERROR_BASE + 0x0057)
#define KIPCRLE_ERROR_NULL_POINTER                          (IVIC_ERROR_BASE + 0x0058)
#define KIPCRLE_ERROR_UNEXPECTED_RESPONSE                   (IVIC_ERROR_BASE + 0x0059)
#define KIPCRLE_ERROR_FILE_NOT_FOUND                        (IVIC_ERROR_BASE + 0x005B)
#define KIPCRLE_ERROR_INVALID_FILE_FORMAT                   (IVIC_ERROR_BASE + 0x005C)
#define KIPCRLE_ERROR_STATUS_NOT_AVAILABLE                  (IVIC_ERROR_BASE + 0x005D)
#define KIPCRLE_ERROR_ID_QUERY_FAILED                       (IVIC_ERROR_BASE + 0x005E)
#define KIPCRLE_ERROR_RESET_FAILED                          (IVIC_ERROR_BASE + 0x005F)
#define KIPCRLE_ERROR_RESOURCE_UNKNOWN                      (IVIC_ERROR_BASE + 0x0060)
#define KIPCRLE_ERROR_ALREADY_INITIALIZED                   (IVIC_ERROR_BASE + 0x0061)
#define KIPCRLE_ERROR_CANNOT_CHANGE_SIMULATION_STATE        (IVIC_ERROR_BASE + 0x0062)
#define KIPCRLE_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR  (IVIC_ERROR_BASE + 0x0063)
#define KIPCRLE_ERROR_INVALID_RANGE_IN_SELECTOR             (IVIC_ERROR_BASE + 0x0064)
#define KIPCRLE_ERROR_UNKOWN_NAME_IN_SELECTOR               (IVIC_ERROR_BASE + 0x0065)
#define KIPCRLE_ERROR_BADLY_FORMED_SELECTOR                 (IVIC_ERROR_BASE + 0x0066)
#define KIPCRLE_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER           (IVIC_ERROR_BASE + 0x0067)
#define KIPCRLE_ERROR_INVALID_ATTRIBUTE                     (IVIC_ERROR_BASE + 0x000C)
#define KIPCRLE_ERROR_TYPES_DO_NOT_MATCH                    (IVIC_ERROR_BASE + 0x0015)
#define KIPCRLE_ERROR_IVI_ATTR_NOT_WRITABLE                 (IVIC_ERROR_BASE + 0x000D)
#define KIPCRLE_ERROR_IVI_ATTR_NOT_READABLE                 (IVIC_ERROR_BASE + 0x000E)
#define KIPCRLE_ERROR_INVALID_SESSION_HANDLE                (IVIC_ERROR_BASE + 0x1190)



#define KIPCRLE_SUCCESS                                     0
#define KIPCRLE_WARN_NSUP_ID_QUERY                          (IVIC_WARN_BASE + 0x0065)
#define KIPCRLE_WARN_NSUP_RESET                             (IVIC_WARN_BASE + 0x0066)
#define KIPCRLE_WARN_NSUP_SELF_TEST                         (IVIC_WARN_BASE + 0x0067)
#define KIPCRLE_WARN_NSUP_ERROR_QUERY                       (IVIC_WARN_BASE + 0x0068)
#define KIPCRLE_WARN_NSUP_REV_QUERY                         (IVIC_WARN_BASE + 0x0069)



#define KIPCRLE_ERROR_IO_GENERAL                            (IVIC_SPECIFIC_ERROR_BASE + 0x0214)
#define KIPCRLE_ERROR_IO_TIMEOUT                            (IVIC_SPECIFIC_ERROR_BASE + 0x0215)
#define KIPCRLE_ERROR_MODEL_NOT_SUPPORTED                   (IVIC_SPECIFIC_ERROR_BASE + 0x0216)
#define KIPCRLE_ERROR_PERSONALITY_NOT_ACTIVE                (IVIC_SPECIFIC_ERROR_BASE + 0x0211)
#define KIPCRLE_ERROR_PERSONALITY_NOT_LICENSED              (IVIC_SPECIFIC_ERROR_BASE + 0x0213)
#define KIPCRLE_ERROR_PERSONALITY_NOT_INSTALLED             (IVIC_SPECIFIC_ERROR_BASE + 0x0212)
#define KIPCRLE_ERROR_MEASUREMENT_NOT_INITIATED             (IVIC_CLASS_ERROR_BASE + 0x0006)
#define KIPCRLE_ERROR_UNSUPPORTED_MEASUREMENT_GROUP         (IVIC_CLASS_ERROR_BASE + 0x000B)
#define KIPCRLE_ERROR_MEASUREMENT_NOT_SUPPORTED             (IVIC_CLASS_ERROR_BASE + 0x0007)
#define KIPCRLE_ERROR_WAVEFORM_IN_USE                       (IVIC_CLASS_ERROR_BASE + 0x000E)
#define KIPCRLE_ERROR_WAVEFORM_RESERVED                     (IVIC_CLASS_ERROR_BASE + 0x0010)
#define KIPCRLE_ERROR_WAVEFORM_NOT_FOUND                    (IVIC_CLASS_ERROR_BASE + 0x000F)
#define KIPCRLE_ERROR_DUPLICATE_WAVEFORM_NAME               (IVIC_CLASS_ERROR_BASE + 0x0004)
#define KIPCRLE_ERROR_NO_WAVEFORMS_AVAILABLE                (IVIC_CLASS_ERROR_BASE + 0x0008)
#define KIPCRLE_ERROR_INVALID_WAVEFORM_NAME                 (IVIC_CLASS_ERROR_BASE + 0x0005)
#define KIPCRLE_ERROR_ALL_PHASES_REQUIRED                   (IVIC_CLASS_ERROR_BASE + 0x0002)
#define KIPCRLE_ERROR_PHASE_VALUES_DIFFERENT                (IVIC_CLASS_ERROR_BASE + 0x000A)
#define KIPCRLE_ERROR_VOLTAGE_PROTECTION                    (IVIC_CLASS_ERROR_BASE + 0x000C)
#define KIPCRLE_ERROR_CURRENT_PROTECTION                    (IVIC_CLASS_ERROR_BASE + 0x0003)
#define KIPCRLE_ERROR_OUTPUT_ENABLED                        (IVIC_CLASS_ERROR_BASE + 0x0009)
#define KIPCRLE_ERROR_WAVEFORM_DC_OFFSET                    (IVIC_CLASS_ERROR_BASE + 0x000D)
#define KIPCRLE_ERROR_ALL_PHASES_NOT_SUPPORTED              (IVIC_CLASS_ERROR_BASE + 0x0001)
#define KIPCRLE_ERROR_INVALID_REGISTER                      (IVIC_SPECIFIC_ERROR_BASE + 0x0217)
#define KIPCRLE_ERROR_INVALID_SUBREGISTER                   (IVIC_SPECIFIC_ERROR_BASE + 0x0218)




/**************************************************************************** 
 *---------------------------- End Include File ----------------------------* 
 ****************************************************************************/
#if defined(__cplusplus) || defined(__cplusplus__)
}
#endif
#endif // __KIPCRLE_HEADER
