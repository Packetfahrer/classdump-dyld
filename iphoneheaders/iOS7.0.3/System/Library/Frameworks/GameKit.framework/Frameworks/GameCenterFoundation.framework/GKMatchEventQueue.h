/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject {

	BOOL _okToSend;
	NSMutableArray* _events;
	NSMutableDictionary* _connectionInfo;
	BOOL _relayInitiated;
	BOOL _hasInitRelayInfo;
	BOOL _hasUpdateRelayInfo;
	unsigned _sequenceNumber;
	BOOL _counted;
	int _playerState;
	int _deferedPlayerState;

}

@property (assign,nonatomic) int playerState;                                   //@synthesize playerState=_playerState - In the implementation block
@property (assign,nonatomic) BOOL counted;                                      //@synthesize counted=_counted - In the implementation block
@property (assign,nonatomic) int deferedPlayerState;                            //@synthesize deferedPlayerState=_deferedPlayerState - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                           //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL okToSend;                                     //@synthesize okToSend=_okToSend - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign,nonatomic) BOOL relayInitiated;                               //@synthesize relayInitiated=_relayInitiated - In the implementation block
@property (assign,nonatomic) BOOL hasInitRelayInfo;                             //@synthesize hasInitRelayInfo=_hasInitRelayInfo - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateRelayInfo;                           //@synthesize hasUpdateRelayInfo=_hasUpdateRelayInfo - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                           //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(unsigned)sequenceNumber;
-(BOOL)counted;
-(void)setCounted:(BOOL)arg1 ;
-(int)deferedPlayerState;
-(void)setDeferedPlayerState:(int)arg1 ;
-(BOOL)okToSend;
-(void)setOkToSend:(BOOL)arg1 ;
-(id)connectionInfo;
-(void)setConnectionInfo:(id)arg1 ;
-(BOOL)relayInitiated;
-(void)setRelayInitiated:(BOOL)arg1 ;
-(BOOL)hasInitRelayInfo;
-(void)setHasInitRelayInfo:(BOOL)arg1 ;
-(BOOL)hasUpdateRelayInfo;
-(void)setHasUpdateRelayInfo:(BOOL)arg1 ;
-(id)events;
-(void)dealloc;
-(id)init;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setEvents:(id)arg1 ;
-(int)playerState;
-(void)setPlayerState:(int)arg1 ;
@end
