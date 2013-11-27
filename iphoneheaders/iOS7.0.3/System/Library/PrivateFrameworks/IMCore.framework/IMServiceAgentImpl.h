/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMCore/IMServiceAgent.h>

@interface IMServiceAgentImpl : IMServiceAgent
+(void)initialize;
+(id)notificationCenter;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned)arg1 ;
+(id)imageURLForStatus:(unsigned)arg1 ;
+(void)_determineStatusImageAppearance;
+(id)sharedAgent;
+(void)_statusImageAppearanceChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)notificationCenter;
-(id)serviceWithName:(id)arg1 ;
-(void)setupComplete;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(unsigned long long)vcCapabilities;
-(void)setMyStatus:(unsigned)arg1 message:(id)arg2 ;
-(void)_statusImageAppearanceChanged:(id)arg1 ;
-(void)_daemonConnected:(id)arg1 ;
-(void)_daemonDisconnected:(id)arg1 ;
-(void)launchIfNecessary;
-(void)_customMessagesChanged:(id)arg1 ;
-(id)myAvailableMessages;
-(id)myAwayMessages;
-(void)setMyAvailableMessages:(id)arg1 ;
-(void)setMyAwayMessages:(id)arg1 ;
-(void)finalize;
@end
