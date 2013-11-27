/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class GKTurnBasedParticipantInternal, NSString, NSDate, GKPlayer;

@interface GKTurnBasedParticipant : NSObject {

	GKTurnBasedParticipantInternal* _internal;

}

@property (nonatomic,readonly) NSString * playerID; 
@property (nonatomic,@dynamic,copy) NSDate * lastTurnDate; 
@property (nonatomic,readonly) int status; 
@property (assign,nonatomic,@dynamic) int matchOutcome; 
@property (nonatomic,@dynamic,copy) NSDate * timeoutDate; 
@property (nonatomic,readonly) NSString * matchStatusString; 
@property (nonatomic,readonly) NSString * matchOutcomeString; 
@property (nonatomic,readonly) BOOL isWinner; 
@property (nonatomic,@dynamic,readonly) GKPlayer * invitedBy; 
@property (nonatomic,@dynamic,readonly) GKPlayer * player; 
@property (nonatomic,@dynamic,readonly) NSString * inviteMessage; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (readonly) GKTurnBasedParticipantInternal * internal;                //@synthesize internal=_internal - In the implementation block
+(id)keyPathsForValuesAffectingStatus;
+(id)stringForMatchOutcome:(int)arg1 ;
+(id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+(id)keyPathsForValuesAffectingMatchOutcomeString;
+(BOOL)matchOutcomeIsValidForDoneState:(int)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(id)basicMatchOutcomeString;
-(BOOL)isWinner;
-(id)playerID;
-(BOOL)isLocalPlayer;
-(id)internal;
-(id)lastTurnDate;
-(id)matchOutcomeString;
-(id)matchStatusString;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)invitedBy;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)player;
@end
