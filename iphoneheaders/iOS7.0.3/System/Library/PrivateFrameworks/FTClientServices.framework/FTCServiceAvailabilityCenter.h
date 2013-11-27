/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)hasListenerID:(id)arg1 forService:(int)arg2 ;
-(void)_postNotificationForService:(int)arg1 availability:(int)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(BOOL)_isValidServiceType:(int)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(int)arg1 create:(BOOL)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 forService:(int)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(int)arg2 ;
-(int)availabilityForListenerID:(id)arg1 forService:(int)arg2 ;
@end
