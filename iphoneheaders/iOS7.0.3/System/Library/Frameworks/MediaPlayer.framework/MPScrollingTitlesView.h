/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, CALayer, NSString;

@interface MPScrollingTitlesView : UIView {

	UILabel* _albumLabel;
	UILabel* _artistLabel;
	float _idealWidth;
	BOOL _marqueeEnabled;
	UIImageView* _marqueeView;
	CALayer* _maskLayer;
	UILabel* _titleLabel;
	int _style;

}

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int style;                    //@synthesize style=_style - In the implementation block
-(id)artist;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(id)_newArtistAlbumLabel;
-(id)_newTitleLabel;
-(void)_stopMarquee;
-(void)_updateMarqueeView;
-(void)setArtist:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(id)title;
-(void)_startMarquee;
-(id)album;
-(void)setAlbum:(id)arg1 ;
-(void).cxx_destruct;
@end

