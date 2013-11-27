/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRNowPlayingControlPacketEvent : TRPacketEvent {

	int _controlCommand;

}

@property (nonatomic,readonly) int controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(int)controlCommand;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithControlCommand:(int)arg1 ;
@end
