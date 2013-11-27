/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/CLLocationManagerDelegate.h>

@class SWRunSensor, SWRemote, SWRunWorkout, NSString, SWRunWorkoutPreset, NSMutableArray, CLLocationManager, NSTimer, CLLocation, SWIntervalSnapshotObserver, SWFastestDistanceWindowObserver, SWDataControllerSnapshotObserver, SWUserInteractionSnapshotObserver, SWDataController, NSDictionary;

@interface SWRunWorkoutController : NSObject <CLLocationManagerDelegate> {

	SWRunSensor* _sensor;
	SWRemote* _remote;
	SWRunWorkout* _workout;
	NSString* _workoutState;
	BOOL _hasEverStarted;
	BOOL _hasFiredBeginningWorkoutPrompt;
	BOOL _sensorBatteryIsLowNotificationSent;
	SWRunWorkoutPreset* _preset;
	BOOL _isWalk;
	NSMutableArray* _workoutObservers;
	CLLocationManager* _locationManager;
	NSTimer* _workoutObserverTimer;
	unsigned _previousObservedElapsedTimeInSeconds;
	float _previousObservedPaceInSecondsPerMile;
	float _previousObservedDistanceInMiles;
	float _previousObservedCalories;
	CLLocation* _previousObservedLocation;
	SWIntervalSnapshotObserver* _mileSnapshotObserver;
	SWIntervalSnapshotObserver* _kmSnapshotObserver;
	SWIntervalSnapshotObserver* _tenSecondSnapshotObserver;
	SWFastestDistanceWindowObserver* _fastestMileObserver;
	SWFastestDistanceWindowObserver* _fastestKilometerObserver;
	SWDataControllerSnapshotObserver* _dataControllerSnapshotObserver;
	SWUserInteractionSnapshotObserver* _userInteractionSnapshotObserver;
	SWDataController* _dataController;

}

@property (nonatomic,readonly) SWRunSensor * sensor;                                    //@synthesize sensor=_sensor - In the implementation block
@property (nonatomic,readonly) SWRemote * remote;                                       //@synthesize remote=_remote - In the implementation block
@property (nonatomic,readonly) NSString * workoutState;                                 //@synthesize workoutState=_workoutState - In the implementation block
@property (nonatomic,@dynamic,readonly) NSDictionary * workoutData; 
@property (nonatomic,readonly) BOOL hasEverStarted;                                     //@synthesize hasEverStarted=_hasEverStarted - In the implementation block
@property (nonatomic,readonly) SWDataController * dataController;                       //@synthesize dataController=_dataController - In the implementation block
@property (nonatomic,@dynamic,retain) SWRunWorkoutPreset * preset; 
@property (assign,nonatomic,@dynamic) BOOL isCalibration; 
@property (nonatomic,@dynamic,readonly) BOOL isCalibratedForWalk; 
@property (nonatomic,@dynamic,readonly) BOOL isCalibratedForRun; 
@property (nonatomic,@dynamic,readonly) BOOL canBeUsedForRunCalibration; 
@property (nonatomic,@dynamic,readonly) BOOL canBeUsedForWalkCalibration; 
@property (nonatomic,@dynamic,readonly) float minCalibrationDistanceMiles; 
@property (nonatomic,@dynamic,readonly) float maxCalibrationDistanceMiles; 
@property (nonatomic,@dynamic,readonly) BOOL hasPowerSong; 
@property (nonatomic,@dynamic,readonly) NSString * powerSongName; 
+(void)resetDefaultController;
+(id)goalTypeForString:(id)arg1 ;
+(BOOL)__takeWorkoutInProgressFileLock;
+(void)__releaseWorkoutInProgressFileLock;
+(void)enableSDA;
+(void)disableSDA;
+(float)kmToMiles:(float)arg1 ;
+(id)distanceDisplayUnitsForPreferences;
+(id)__systemVersion;
+(id)__uniqueIdentifier;
+(id)defaultController;
+(BOOL)shouldUseKilometersForPaceWithWorkoutSummary:(id)arg1 ;
+(BOOL)shouldUseKilometersForDistanceWithWorkoutSummary:(id)arg1 ;
+(float)milesToKm:(float)arg1 ;
+(float)secondsPerMileToSecondsPerKm:(float)arg1 ;
+(float)secondsPerKmToSecondsPerMile:(float)arg1 ;
+(float)lbsToKgs:(float)arg1 ;
+(float)kgsToLbs:(float)arg1 ;
+(id)distanceUnitForString:(id)arg1 ;
+(BOOL)isWorkoutInProgressOnSystem;
-(void)setPreset:(id)arg1 ;
-(void)stopVoicePrompts;
-(float)minCalibrationDistanceMiles;
-(float)maxCalibrationDistanceMiles;
-(BOOL)saveCalibrationData;
-(BOOL)saveCalibrationDataWithAdjustedDistanceInMiles:(float)arg1 ;
-(BOOL)canBeUsedForWalkCalibration;
-(BOOL)canBeUsedForRunCalibration;
-(void)resetCalibration;
-(id)workoutData;
-(void)activateWorkout;
-(void)pauseWorkout;
-(id)sensor;
-(BOOL)isCalibration;
-(void)setIsCalibration:(BOOL)arg1 ;
-(id)initWithSensor:(id)arg1 remote:(id)arg2 ;
-(BOOL)_shouldRecordLocation;
-(void)registerWorkoutObserver:(id)arg1 ;
-(void)refreshSettings;
-(void)togglePauseResumeWorkoutFromHeadset;
-(void)playPowerSong;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(void)_updateWorkoutObserversForOldState:(id)arg1 newState:(id)arg2 ;
-(void)_setWorkoutState:(id)arg1 ;
-(void)_beginSearchingForSensorAfterLink;
-(void)_remoteCommandIssued:(id)arg1 ;
-(void)_linkStateChangedNotification:(id)arg1 ;
-(void)_searchStateChangedNotification:(id)arg1 ;
-(void)_updateWorkoutObserversForUserEvent:(id)arg1 ;
-(void)_startWorkoutObserverTimer;
-(void)_cancelWorkoutObserverTimer;
-(void)_updateWorkoutObserversForTimer:(id)arg1 ;
-(id)_powerSongPersistentUIDString;
-(id)powerSongName;
-(void)prepareToActivateWorkout;
-(id)preset;
-(BOOL)isCalibratedForWalk;
-(BOOL)isCalibratedForRun;
-(void)unregisterWorkoutObserver:(id)arg1 ;
-(BOOL)hasPowerSong;
-(id)workoutState;
-(BOOL)hasEverStarted;
-(id)dataController;
-(void)unlinkRemote;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)_postNotificationName:(id)arg1 ;
-(id)remote;
@end
