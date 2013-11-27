/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class GKLeaderboardSetInternal, NSString, NSArray;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding> {

	GKLeaderboardSetInternal* _internal;

}

@property (nonatomic,@dynamic,copy) NSString * title; 
@property (nonatomic,@dynamic,readonly) NSString * groupIdentifier; 
@property (nonatomic,@dynamic,copy) NSString * identifier; 
@property (nonatomic,@dynamic,readonly) NSArray * leaderboardIdentifiers; 
@property (retain) GKLeaderboardSetInternal * internal;                                //@synthesize internal=_internal - In the implementation block
+(void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadLeaderboardSetsWithCompletionHandler:(/*^block*/ id)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)setInternal:(id)arg1 ;
-(void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)loadLeaderboardsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(id)internal;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end
