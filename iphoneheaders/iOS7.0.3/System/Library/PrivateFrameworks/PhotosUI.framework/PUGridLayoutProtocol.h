/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PUGridLayoutProtocol <NSObject,PUCollectionViewLayoutDelegating>
@property (nonatomic,readonly) NSIndexPath * globalFooterIndexPath; 
@property (assign,nonatomic) float globalFooterHeight; 
@property (assign,nonatomic) float globalTopPadding; 
@property (assign,nonatomic) float globalBottomPadding; 
@property (nonatomic,copy) NSSet * hiddenItemIndexPaths; 
@property (nonatomic,copy) NSString * sectionHeaderElementKind; 
@property (assign,nonatomic) float sectionHeaderHeight; 
@property (assign,nonatomic) float sectionTopPadding; 
@required
-(void)setSectionHeaderHeight:(float)arg1;
-(float)sectionHeaderHeight;
-(id)sectionHeaderElementKind;
-(void)invalidateLayoutForVerticalScroll;
-(id)assetIndexPathsForElementsInRect:(CGRect)arg1;
-(float)globalFooterHeight;
-(void)setGlobalFooterHeight:(float)arg1;
-(id)globalFooterIndexPath;
-(float)globalTopPadding;
-(void)setGlobalTopPadding:(float)arg1;
-(float)globalBottomPadding;
-(void)setGlobalBottomPadding:(float)arg1;
-(id)hiddenItemIndexPaths;
-(void)setHiddenItemIndexPaths:(id)arg1;
-(void)setSectionHeaderElementKind:(id)arg1;
-(float)sectionTopPadding;
-(void)setSectionTopPadding:(float)arg1;
@end
