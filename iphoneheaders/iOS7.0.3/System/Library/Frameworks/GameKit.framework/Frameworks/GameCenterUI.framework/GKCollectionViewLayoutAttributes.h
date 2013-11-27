/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@protocol UICollectionViewDataSource;
@class UICollectionView, , GKSectionMetrics, GKSupplementaryViewMetrics;

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _allSectionItemsVisible;
	BOOL _isPinned;
	BOOL _isPartOfGlobalPinningGroup;
	BOOL _doesAbutLeftOfCollectionView;
	UICollectionView* _collectionView;
	float _unpinnedY;
	<UICollectionViewDataSource>* _dataSource;
	GKSectionMetrics* _sectionMetrics;
	GKSupplementaryViewMetrics* _supplementaryMetrics;
	unsigned _currentVisibleItemCount;
	unsigned _currentTotalItemCount;
	unsigned _maxTotalItemCount;
	float _incrementalRevealTextOffset;
	unsigned _gridLayoutLocation;

}

@property (nonatomic,retain) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL allSectionItemsVisible;                                    //@synthesize allSectionItemsVisible=_allSectionItemsVisible - In the implementation block
@property (assign,nonatomic) BOOL isPinned;                                                  //@synthesize isPinned=_isPinned - In the implementation block
@property (assign,nonatomic) float unpinnedY;                                                //@synthesize unpinnedY=_unpinnedY - In the implementation block
@property (nonatomic,retain) <UICollectionViewDataSource> * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) GKSectionMetrics * sectionMetrics;                              //@synthesize sectionMetrics=_sectionMetrics - In the implementation block
@property (nonatomic,retain) GKSupplementaryViewMetrics * supplementaryMetrics;              //@synthesize supplementaryMetrics=_supplementaryMetrics - In the implementation block
@property (assign,nonatomic) unsigned currentVisibleItemCount;                               //@synthesize currentVisibleItemCount=_currentVisibleItemCount - In the implementation block
@property (assign,nonatomic) unsigned currentTotalItemCount;                                 //@synthesize currentTotalItemCount=_currentTotalItemCount - In the implementation block
@property (assign,nonatomic) unsigned maxTotalItemCount;                                     //@synthesize maxTotalItemCount=_maxTotalItemCount - In the implementation block
@property (assign,nonatomic) float incrementalRevealTextOffset;                              //@synthesize incrementalRevealTextOffset=_incrementalRevealTextOffset - In the implementation block
@property (assign,nonatomic) BOOL isPartOfGlobalPinningGroup;                                //@synthesize isPartOfGlobalPinningGroup=_isPartOfGlobalPinningGroup - In the implementation block
@property (assign,nonatomic) unsigned gridLayoutLocation;                                    //@synthesize gridLayoutLocation=_gridLayoutLocation - In the implementation block
@property (assign,nonatomic) BOOL doesAbutLeftOfCollectionView;                              //@synthesize doesAbutLeftOfCollectionView=_doesAbutLeftOfCollectionView - In the implementation block
-(BOOL)doesAbutLeftOfCollectionView;
-(id)supplementaryMetrics;
-(unsigned)maxTotalItemCount;
-(unsigned)currentVisibleItemCount;
-(id)sectionMetrics;
-(float)incrementalRevealTextOffset;
-(void)setIsPinned:(BOOL)arg1 ;
-(unsigned)currentTotalItemCount;
-(BOOL)allSectionItemsVisible;
-(void)setAllSectionItemsVisible:(BOOL)arg1 ;
-(void)setIsPartOfGlobalPinningGroup:(BOOL)arg1 ;
-(void)setUnpinnedY:(float)arg1 ;
-(void)setSectionMetrics:(id)arg1 ;
-(void)setSupplementaryMetrics:(id)arg1 ;
-(void)setCurrentVisibleItemCount:(unsigned)arg1 ;
-(void)setCurrentTotalItemCount:(unsigned)arg1 ;
-(void)setMaxTotalItemCount:(unsigned)arg1 ;
-(void)setGridLayoutLocation:(unsigned)arg1 ;
-(void)setDoesAbutLeftOfCollectionView:(BOOL)arg1 ;
-(void)setIncrementalRevealTextOffset:(float)arg1 ;
-(float)unpinnedY;
-(BOOL)isPartOfGlobalPinningGroup;
-(unsigned)gridLayoutLocation;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dataSource;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isPinned;
-(id)collectionView;
-(void)setCollectionView:(id)arg1 ;
@end
