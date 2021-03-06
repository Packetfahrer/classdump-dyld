/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <EventKitUI/EKUIEventStatusButtonsViewDelegate.h>

@protocol CalendarMessageCellDelegate;
@class UILabel, UIView, EKUIEventStatusButtonsView, EKCalendarNotification, NSDictionary;

@interface CalendarMessageCell : UITableViewCell <EKUIEventStatusButtonsViewDelegate> {

	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _thirdTitleLabel;
	UILabel* _fourthTitleLabel;
	UILabel* _subSubTitleLabel;
	UIView* _colorBar;
	EKUIEventStatusButtonsView* _responseButtons;
	float _height;
	int _messageCellType;
	EKCalendarNotification* _notification;
	<CalendarMessageCellDelegate>* _delegate;
	NSDictionary* _frameDictionary;

}

@property (nonatomic,retain) EKCalendarNotification * notification;                        //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic,__weak) <CalendarMessageCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * frameDictionary;                               //@synthesize frameDictionary=_frameDictionary - In the implementation block
@property (nonatomic,readonly) float height; 
+(Class)cellClassForNotification:(id)arg1 ;
+(id)_reuseIdentifierForCellClass:(Class)arg1 ;
+(id)cellSubclasses;
+(void)_configureLabelAsTitleLabel:(id)arg1 ;
+(id)titleForNotification:(id)arg1 ;
+(id)subtitleForNotification:(id)arg1 ;
+(void)_configureLabelAsSubTitleLabel:(id)arg1 ;
+(id)thirdTitleForNotification:(id)arg1 ;
+(id)fourthTitleForNotification:(id)arg1 ;
+(id)subSubTitleForNotification:(id)arg1 ;
+(void)_configureLabelAsSubSubTitleLabel:(id)arg1 ;
+(id)colorForNotification:(id)arg1 ;
+(id)cellFrameDictionaryForNotification:(id)arg1 ;
+(int)messageCellTypeForNotification:(id)arg1 ;
+(BOOL)showAsCancelledOrDeclinedForNotification:(id)arg1 ;
+(id)reuseIdentifierForNotification:(id)arg1 ;
+(void)registerClassReuseIdentifiersInTableView:(id)arg1 ;
+(float)defaultRowHeight;
-(id)_frameDictionary;
-(BOOL)showAsCancelledOrDeclined;
-(id)_updateLabel:(id)arg1 withFrame:(CGRect)arg2 text:(id)arg3 textColor:(id)arg4 strikethrough:(BOOL)arg5 ;
-(id)_subTitleLabel;
-(id)_thirdTitleLabel;
-(id)thirdTitle;
-(id)_fourthTitleLabel;
-(id)fourthTitle;
-(id)_subSubTitleLabel;
-(id)subSubTitle;
-(id)_responseButtons;
-(void)_updateSelectedResponseButton;
-(id)_colorBar;
-(id)responseButtonTitles;
-(int)messageCellType;
-(int)messageActionForButtonIndex:(unsigned)arg1 ;
-(void)buttonPressedWithAction:(int)arg1 ;
-(id)frameDictionary;
-(void)setFrameDictionary:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 didSelectButtonAtIndex:(unsigned)arg2 ;
-(float)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(float)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(id)title;
-(id)_titleLabel;
-(float)height;
-(id)color;
-(id)subtitle;
-(void)setNotification:(id)arg1 ;
-(id)notification;
-(void).cxx_destruct;
@end

