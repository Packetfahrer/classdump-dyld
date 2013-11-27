/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKPlayer, GKGame, GKScoreChallengeSuggestionDataSource, GKAchievementChallengeSuggestionDataSource;

@interface GKFriendPlaySuggestionDataSource : GKBasicCollectionViewDataSource {

	GKPlayer* _friend;
	GKGame* _game;
	GKScoreChallengeSuggestionDataSource* _scoreChallengeDataSource;
	GKAchievementChallengeSuggestionDataSource* _achievementChallengeDataSource;

}

@property (nonatomic,retain) GKPlayer * friend;                                                                        //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                                            //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKScoreChallengeSuggestionDataSource * scoreChallengeDataSource;                          //@synthesize scoreChallengeDataSource=_scoreChallengeDataSource - In the implementation block
@property (nonatomic,retain) GKAchievementChallengeSuggestionDataSource * achievementChallengeDataSource;              //@synthesize achievementChallengeDataSource=_achievementChallengeDataSource - In the implementation block
+(id)suggestionDataSourceForFriend:(id)arg1 game:(id)arg2 ;
-(id)initWithFriend:(id)arg1 game:(id)arg2 ;
-(void)setScoreChallengeDataSource:(id)arg1 ;
-(void)setAchievementChallengeDataSource:(id)arg1 ;
-(id)titleLabelForItemAtIndexPath:(id)arg1 ;
-(id)scoreChallengeDataSource;
-(id)achievementChallengeDataSource;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)sectionTitle;
-(id)friend;
-(void)setFriend:(id)arg1 ;
@end
