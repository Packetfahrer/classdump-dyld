/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRAuthorizationStatusPacketEvent : TRPacketEvent {

	int _authorizationStatus;

}

@property (nonatomic,readonly) int authorizationStatus;              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(int)authorizationStatus;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithAuthorizationStatus:(int)arg1 ;
@end
