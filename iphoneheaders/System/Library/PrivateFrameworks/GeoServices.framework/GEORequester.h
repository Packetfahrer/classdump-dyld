/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequester.h>

@class NSThread, NSString;

@interface GEORequester : PBRequester {

	BOOL _disableReplay;
	NSThread* _thread;
	BOOL _usePersistentConnection;
	BOOL _useBackgroundConnection;
	NSString* _debugRequestName;

}

@property (assign) BOOL disableReplay;                                 //@synthesize disableReplay=_disableReplay - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;              //@synthesize debugRequestName=_debugRequestName - In the implementation block
+(id)_logRequestResponseDirectory;
+(void)setLogRequestResponseDirectory:(id)arg1 ;
+(void)stopAllRequests;
+(void)replayRequests;
+(void)setAppID:(id)arg1 ;
+(void)setOSVersion:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 usePersistentConnection:(BOOL)arg3 useBackgroundConnection:(BOOL)arg4 ;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 usePersistentConnection:(BOOL)arg3 ;
-(void)setDebugRequestName:(id)arg1 ;
-(id)logRequestToFile;
-(id)logResponseToFile;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 ;
-(void)_applicationDidStopAllRequests:(id)arg1 ;
-(void)_applicationWantsToReplayRequests:(id)arg1 ;
-(void)_handleSuspendOnThread;
-(BOOL)disableReplay;
-(void)_handleResumeOnThread;
-(id)requestPreamble;
-(CFURLRequestRef)newCFMutableURLRequestWithURL:(id)arg1 ;
-(id)persistentConnectionSession;
-(id)newConnectionWithCFURLRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 ;
-(id)debugRequestName;
-(void)setDisableReplay:(BOOL)arg1 ;
@end
