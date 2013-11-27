/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSArray, NSString, UIColor;

@interface YearMonthTransitionMonthView : UIView {

	BOOL _hasValidOrigin;
	float _topInset;
	UILabel* _monthLabel;
	NSArray* _weekViews;

}

@property (assign,nonatomic) float topInset;                              //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) BOOL hasValidOrigin;                         //@synthesize hasValidOrigin=_hasValidOrigin - In the implementation block
@property (nonatomic,readonly) CGRect monthFrame; 
@property (nonatomic,readonly) CGRect monthFrameInMonthView; 
@property (nonatomic,readonly) CGRect monthLabelFrame; 
@property (nonatomic,readonly) NSString * monthLabelText; 
@property (nonatomic,readonly) UIColor * monthLabelColor; 
@property (nonatomic,retain) UILabel * monthLabel;                        //@synthesize monthLabel=_monthLabel - In the implementation block
@property (nonatomic,retain) NSArray * weekViews;                         //@synthesize weekViews=_weekViews - In the implementation block
-(CGRect)monthFrame;
-(CGRect)monthLabelFrame;
-(id)monthLabelText;
-(id)monthLabel;
-(id)monthLabelColor;
-(CGRect)monthFrameInMonthView;
-(void)setHasValidOrigin:(BOOL)arg1 ;
-(void)setMonthLabel:(id)arg1 ;
-(void)setWeekViews:(id)arg1 ;
-(CGRect)_adjustFrame:(CGRect)arg1 ;
-(id)weekViews;
-(BOOL)hasValidOrigin;
-(float)topInset;
-(void)setTopInset:(float)arg1 ;
-(void).cxx_destruct;
@end
