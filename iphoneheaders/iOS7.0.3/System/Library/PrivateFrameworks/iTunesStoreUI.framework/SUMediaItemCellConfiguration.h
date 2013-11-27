/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (nonatomic,readonly) CGSize artworkSize; 
@property (nonatomic,readonly) int mediaIconType; 
@property (nonatomic,readonly) BOOL showContentRating; 
+(id)copyDefaultContext;
-(void)drawWithModifiers:(unsigned)arg1 ;
-(id)fontForLabelAtIndex:(unsigned)arg1 ;
-(float)alphaForImageAtIndex:(unsigned)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned)arg3 ;
-(float)alphaForLabelAtIndex:(unsigned)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned)arg3 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(id)initWithStringCount:(unsigned)arg1 imageCount:(unsigned)arg2 ;
-(id)copyImageDataProvider;
-(CGSize)artworkSize;
-(UIEdgeInsets)_ratingBorderInsets;
-(int)mediaIconType;
-(BOOL)showContentRating;
@end
