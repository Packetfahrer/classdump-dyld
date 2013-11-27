/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKExpiringCacheObject.h>

@class NSDate, NSNumber, NSString, GKGameCacheObject, GKPlayerProfileCacheObject, GKAchievementPointsEntryCacheObject;

@interface GKGameRecordCacheObject : GKExpiringCacheObject

@property (assign,nonatomic,@dynamic) BOOL valid; 
@property (nonatomic,@dynamic,retain) NSDate * lastPlayedDate; 
@property (nonatomic,@dynamic,retain) NSDate * purchaseDate; 
@property (nonatomic,@dynamic,retain) NSNumber * achievements; 
@property (nonatomic,@dynamic,retain) NSNumber * achievementPoints; 
@property (nonatomic,@dynamic,retain) NSNumber * rank; 
@property (nonatomic,@dynamic,retain) NSNumber * maxRank; 
@property (nonatomic,@dynamic,retain) NSNumber * friendRank; 
@property (nonatomic,@dynamic,retain) NSNumber * maxFriendRank; 
@property (nonatomic,@dynamic,retain) NSString * defaultLeaderboardIdentifier; 
@property (nonatomic,@dynamic,retain) GKGameCacheObject * game; 
@property (nonatomic,@dynamic,retain) GKPlayerProfileCacheObject * player; 
@property (nonatomic,@dynamic,retain) GKAchievementPointsEntryCacheObject * achievementPointsEntry; 
+(id)uniqueAttributeName;
+(id)relationshipKeyPathsForPrefetch;
+(id)fetchSortDescriptors;
+(id)uniqueObjectIDLookupWithContext:(id)arg1 ;
+(id)uniqueObjectIDLookupForPlayer:(id)arg1 ;
+(id)recordsForGames:(id)arg1 playerProfile:(id)arg2 ;
+(id)recordForGame:(id)arg1 playerProfile:(id)arg2 ;
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(void)updateAchievementsWithServerRepresentation:(id)arg1 ;
-(id)internalRepresentation;
@end
