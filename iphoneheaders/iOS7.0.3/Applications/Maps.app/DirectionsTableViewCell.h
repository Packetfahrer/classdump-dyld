/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class MNSimpleSignView, RouteStepLabelListView, UIImageView, VKShieldArtwork;

@interface DirectionsTableViewCell : UITableViewCell {

	MNSimpleSignView* _signView;
	RouteStepLabelListView* _labelListView;
	UIImageView* _iconView;
	BOOL _alignLeftIfNoManeuverSign;
	BOOL _isDimmedStep;
	VKShieldArtwork* _shieldArtwork;
	BOOL _isNightMode;

}

@property (assign,nonatomic) BOOL isNightMode;              //@synthesize isNightMode=_isNightMode - In the implementation block
+(float)heightForWidth:(float)arg1 route:(id)arg2 step:(id)arg3 ;
+(Class)_labelListViewClassForRoute:(id)arg1 step:(id)arg2 ;
+(float)_textWidthForWidth:(float)arg1 withManeuver:(BOOL)arg2 ;
+(id)currentStepColor;
+(id)reuseIdentifier;
-(void)_updateStyleValuesFromTheme;
-(void)setRoute:(id)arg1 step:(id)arg2 stepIndex:(unsigned)arg3 currentStep:(BOOL)arg4 alignToLeftEdgeIfNoManeuverSign:(BOOL)arg5 ;
-(void)setIsDimmedStep:(BOOL)arg1 ;
-(void)setIsNightMode:(BOOL)arg1 ;
-(BOOL)isNightMode;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
@end
