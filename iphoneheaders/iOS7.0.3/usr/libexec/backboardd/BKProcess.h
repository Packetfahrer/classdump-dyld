/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKProcessAssertionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;
@class NSObject, NSString, NSSet, BKSMachSendRight, BKPortDeathWatcher, NSMutableSet;

@interface BKProcess : NSObject <BKProcessAssertionDelegate> {

	NSObject<OS_dispatch_queue>* _queue;
	NSString* _jobLabel;
	BOOL _running;
	int _suspendedPriorityBand;
	int _backgroundPriorityBand;
	int _currentPriorityBand;
	double _timedAssertionPermittedDuration;
	double _timedAssertionReferenceTime;
	BOOL _timedAssertionDeadlineActive;
	double _allowIdleSleepReferenceTime;
	double _suspendedUntilUnlockReferenceTime;
	NSObject<OS_dispatch_group>* _timerLifecycleGroup;
	NSObject<OS_dispatch_source>* _backgroundPermissionCheckTimer;
	NSObject<OS_dispatch_source>* _backgroundPermissionExpirationWarningTimer;
	NSObject<OS_dispatch_source>* _taskCompletionAllowIdleSleepTimer;
	NSSet* _allowedLockedFilePaths;
	int _pid;
	NSString* _eventPortName;
	unsigned _eventPort;
	unsigned _taskNamePort;
	BKSMachSendRight* _taskPort;
	BKPortDeathWatcher* _taskMonitor;
	BKProcessTimes _times;
	double _unsuspendLimitStart;
	int _unsuspendLimitCount;
	NSMutableSet* _assertions;
	NSMutableSet* _limitlessAssertions;
	NSMutableSet* _watchdogAssertions;
	unsigned _powerAssertionID;
	unsigned _hasWatchdogAssertionsOut : 1;
	BOOL _supportsVoIP;
	BOOL _supportsUnboundedTaskCompletion;
	BOOL _supportsNetworkAuthentication;
	BOOL _supportsNewsstand;
	BOOL _supportsBackgroundContentFetching;
	unsigned long long _priorityBandUserData;
	unsigned long long _lastPriorityBandUserData;
	unsigned _nowPlayingWithAudio : 1;
	unsigned _recordingAudio : 1;
	unsigned _receivingPacketsFromAccessory : 1;
	unsigned _frontmost : 1;
	unsigned _taskSuspended : 1;
	unsigned _terminateOnSuspension : 1;
	unsigned _usesSocketMonitoring : 1;
	unsigned _supportsBackgroundTaskAssertions : 1;
	unsigned _supportsSuspendOnLock : 1;
	unsigned _assertionsWantForegroundResourcePriority : 1;
	unsigned _isViewService : 1;
	unsigned _hasViewServiceBeenSuspended : 1;
	unsigned _shouldSuspendOnSleep : 1;
	unsigned _throttleSetForTheFirstTime : 1;
	unsigned _uiThrottled : 1;
	unsigned _cpuThrottled : 1;
	int _priority;

}

@property (readonly) int pid;                                                                       //@synthesize pid=_pid - In the implementation block
@property (getter=isRunning) BOOL running; 
@property (readonly) NSString * name; 
@property (copy) NSString * jobLabel;                                                               //@synthesize jobLabel=_jobLabel - In the implementation block
@property (getter=isRecordingAudio) BOOL recordingAudio; 
@property (assign) BOOL usesSocketMonitoring; 
@property (assign) BOOL supportsBackgroundTaskAssertions; 
@property (assign) BOOL supportsSuspendOnLock; 
@property (assign) BOOL supportsVoIP;                                                               //@synthesize supportsVoIP=_supportsVoIP - In the implementation block
@property (assign) BOOL supportsUnboundedTaskCompletion;                                            //@synthesize supportsUnboundedTaskCompletion=_supportsUnboundedTaskCompletion - In the implementation block
@property (assign) BOOL supportsNetworkAuthentication;                                              //@synthesize supportsNetworkAuthentication=_supportsNetworkAuthentication - In the implementation block
@property (assign) BOOL supportsNewsstand;                                                          //@synthesize supportsNewsstand=_supportsNewsstand - In the implementation block
@property (assign) BOOL supportsBackgroundContentFetching;                                          //@synthesize supportsBackgroundContentFetching=_supportsBackgroundContentFetching - In the implementation block
@property (assign) BOOL isViewService; 
@property (getter=isFrontmost) BOOL frontmost; 
@property (getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio; 
@property (getter=isReceivingPacketsFromAccessory) BOOL receivingPacketsFromAccessory; 
@property (assign) int backgroundPriorityBand; 
@property (assign) int suspendedPriorityBand; 
@property (readonly) int currentPriorityBand; 
@property (copy) NSSet * allowedLockedFilePaths;                                                    //@synthesize allowedLockedFilePaths=_allowedLockedFilePaths - In the implementation block
@property (retain) BKSMachSendRight * taskPort; 
@property (readonly) int priority;                                                                  //@synthesize priority=_priority - In the implementation block
@property (readonly) BOOL hasResumeAssertion; 
@property (readonly) unsigned eventPort;                                                            //@synthesize eventPort=_eventPort - In the implementation block
@property (readonly) NSString * eventPortName;                                                      //@synthesize eventPortName=_eventPortName - In the implementation block
@property (readonly) unsigned taskNamePort;                                                         //@synthesize taskNamePort=_taskNamePort - In the implementation block
@property (getter=isBeingDebugged,readonly) BOOL beingDebugged; 
@property (getter=isBeingPtraced,readonly) BOOL beingPtraced; 
@property (readonly) BOOL hasWatchdogAssertionsOut; 
@property (readonly) double elapsedCPUTime; 
@property (readonly) double execTime; 
@property (readonly) double remainingAllowedAssertionDuration; 
@property (readonly) NSSet * lockedFilePathsIgnoringAllowed; 
+(void)deleteAllJobs;
+(void)shutdownSuspendedProcessSockets;
+(void)scheduleTaskCompletionAllowIdleSleep;
+(void)cancelTaskCompletionAllowIdleSleep;
+(void)resumeIfSuspendedForSleep;
+(void)enumerateAllProcessesWithBlock:(/*^block*/ id)arg1 ;
+(void)hostwideUserElapsedCPUTime:(double*)arg1 systemElapsedCPUTime:(double*)arg2 idleElapsedCPUTime:(double*)arg3 ;
+(unsigned long long)_bitForProcessAssertionReason:(unsigned)arg1 ;
+(void)_logJetsamPriorities;
+(id)_allProcesses;
+(id)processForPid:(int)arg1 ;
+(id)launchedProcessWithBundleIdentifier:(id)arg1 path:(id)arg2 containerPath:(id)arg3 arguments:(id)arg4 environment:(id)arg5 standardOutputPath:(id)arg6 standardErrorPath:(id)arg7 machServices:(id)arg8 threadPriority:(long long)arg9 frontmost:(BOOL)arg10 systemApp:(BOOL)arg11 backgroundPriorityBand:(int)arg12 suspendedPriorityBand:(int)arg13 waitForDebugger:(BOOL)arg14 disableASLR:(BOOL)arg15 allowedLockedFilePaths:(id)arg16 terminateOnSuspension:(BOOL)arg17 queue:(id)arg18 ;
+(void)watchForProcessTermination:(id)arg1 bundleID:(id)arg2 ;
+(int)defaultBackgroundPriorityBand;
+(int)defaultBackgroundLoweredPriorityBand;
+(int)defaultSuspendedPriorityBand;
+(int)defaultSuspendedLoweredPriorityBand;
+(void)initialize;
-(BOOL)isBeingDebugged;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(BOOL)isRecordingAudio;
-(void)removeAssertion:(id)arg1 ;
-(id)processAssertionDelegateDescription:(id)arg1 ;
-(void)processAssertion:(id)arg1 preventTaskSuspendChanged:(BOOL)arg2 ;
-(void)processAssertion:(id)arg1 preventCPUThrottleDownChanged:(BOOL)arg2 ;
-(void)processAssertion:(id)arg1 preventUIThrottleDownChanged:(BOOL)arg2 ;
-(void)processAssertion:(id)arg1 preventIdleSleepChanged:(BOOL)arg2 ;
-(void)processAssertion:(id)arg1 wantsForegroundResourcePriorityCountChange:(BOOL)arg2 ;
-(void)processAssertion:(id)arg1 preventSuspendOnSleepChanged:(BOOL)arg2 ;
-(void)processAssertionInvalidated:(id)arg1 ;
-(id)assertions;
-(double)remainingAllowedAssertionDuration;
-(void)setReceivingPacketsFromAccessory:(BOOL)arg1 ;
-(double)elapsedCPUTime;
-(void)setFrontmost:(BOOL)arg1 ;
-(void)waitToExecOrExit;
-(void)_systemWillSleep:(id)arg1 ;
-(void)_cancelTimers;
-(id)initWithPid:(int)arg1 frontmost:(BOOL)arg2 backgroundPriorityBand:(int)arg3 suspendedPriorityBand:(int)arg4 jobLabel:(id)arg5 eventPortName:(id)arg6 allowedLockedFilePaths:(id)arg7 terminateOnSuspension:(BOOL)arg8 execTime:(double)arg9 queue:(id)arg10 ;
-(void)watchForTerminationWithHandler:(/*^block*/ id)arg1 ;
-(void)_updatePriorityBand;
-(void)killWithSignal:(int)arg1 ;
-(BOOL)_isWorkspaceLocked;
-(BOOL)_taskShutdownSockets:(int)arg1 ;
-(void)_resumeIfSuspendedForSleep;
-(id)_setupOneShotTimer:(double)arg1 withBlock:(/*^block*/ id)arg2 ;
-(void)_scheduleTaskCompletionAllowIdleSleep;
-(void)_cancelTaskCompletionAllowIdleSleep;
-(id)allowedLockedFilePaths;
-(void)_forceCrashReportWithReason:(int)arg1 description:(id)arg2 ;
-(id)lockedFilePathsIgnoringAllowed;
-(void)watchdogTerminateWithReason:(int)arg1 format:(id)arg2 ;
-(BOOL)assertionsWantForegroundResourcePriority;
-(BOOL)_hasViewServiceAssertion;
-(BOOL)isViewService;
-(int)_currentPriorityBand;
-(id)jobLabel;
-(void)dispatchSharedLockCheck;
-(id)_crashReportCPUUsageInfo;
-(id)_crashReportThermalsInfo;
-(BOOL)_isBeingDebugged;
-(BOOL)isBeingPtraced;
-(BOOL)isFrontmost;
-(unsigned)_calculateAssertionStateWithPowerAssertionNames:(id*)arg1 priorityBandData:(unsigned long long*)arg2 ;
-(void)setAssertionsWantForegroundResourcePriority:(BOOL)arg1 ;
-(BOOL)_resumeForReason:(unsigned)arg1 ;
-(BOOL)_setPriority:(int)arg1 ofResource:(int)arg2 ;
-(void)_updateBackgroundPermissionCheckTimer;
-(void)_updateAssertionNeedsWithReason:(unsigned)arg1 ;
-(void)markWatchdogCPUTimes;
-(void)_notifyOfExpirationWarning;
-(void)_checkWatchdogAssertionsCount;
-(BOOL)usesSocketMonitoring;
-(void)setUsesSocketMonitoring:(BOOL)arg1 ;
-(BOOL)supportsBackgroundTaskAssertions;
-(void)setSupportsBackgroundTaskAssertions:(BOOL)arg1 ;
-(BOOL)supportsSuspendOnLock;
-(void)setSupportsSuspendOnLock:(BOOL)arg1 ;
-(void)setIsViewService:(BOOL)arg1 ;
-(BOOL)hasResumeAssertion;
-(BOOL)isNowPlayingWithAudio;
-(BOOL)isReceivingPacketsFromAccessory;
-(int)backgroundPriorityBand;
-(void)setBackgroundPriorityBand:(int)arg1 ;
-(int)suspendedPriorityBand;
-(void)setSuspendedPriorityBand:(int)arg1 ;
-(int)currentPriorityBand;
-(BOOL)taskCompletionShouldPreventIdleSleep;
-(double)execTime;
-(long long)noteExitedForForceQuit:(BOOL)arg1 ;
-(BOOL)hasAssertions;
-(BOOL)hasAssertionForReason:(unsigned)arg1 ;
-(BOOL)hasWatchdogAssertionsOut;
-(void)addWatchdogAssertion:(id)arg1 ;
-(void)removeWatchdogAssertion:(id)arg1 ;
-(void)setAllowedLockedFilePaths:(id)arg1 ;
-(void)setJobLabel:(id)arg1 ;
-(id)eventPortName;
-(unsigned)taskNamePort;
-(BOOL)supportsVoIP;
-(void)setSupportsVoIP:(BOOL)arg1 ;
-(BOOL)supportsUnboundedTaskCompletion;
-(void)setSupportsUnboundedTaskCompletion:(BOOL)arg1 ;
-(BOOL)supportsNetworkAuthentication;
-(void)setSupportsNetworkAuthentication:(BOOL)arg1 ;
-(BOOL)supportsNewsstand;
-(void)setSupportsNewsstand:(BOOL)arg1 ;
-(BOOL)supportsBackgroundContentFetching;
-(void)setSupportsBackgroundContentFetching:(BOOL)arg1 ;
-(BOOL)_taskResumeForReason:(unsigned)arg1 ;
-(BOOL)_taskSuspend;
-(BOOL)_suspend;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)debugDescription;
-(id)name;
-(BOOL)isRunning;
-(int)priority;
-(id)taskPort;
-(void)setTaskPort:(id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)addAssertion:(id)arg1 ;
-(void)setRecordingAudio:(BOOL)arg1 ;
-(unsigned)eventPort;
-(int)pid;
@end
