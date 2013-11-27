/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, NSIndexSet, NSMutableAttributedString;

@interface EKDayOccurrenceContentView : UIView {

	NSString* _title;
	NSString* _location;
	UIColor* _color;
	UIColor* _titleTextColor;
	UIColor* _secondaryTextColor;
	UIColor* _textBackgroundColor;
	UIColor* _statusTextColor;
	NSIndexSet* _titleMetrics;
	CGPoint _titleEndPoint;
	float _textEndY;
	CGRect _titleRect;
	CGRect _fullTextRect;
	NSMutableAttributedString* _attributedContentString;
	BOOL _allDay;
	BOOL _birthday;
	BOOL _facebook;
	BOOL _cancelled;
	BOOL _tentative;
	BOOL _declined;
	BOOL _needsReply;
	BOOL _selected;
	BOOL _allDayDrawingStyle;
	BOOL _usesSmallText;
	BOOL _hideText;
	int _occurrenceBackgroundStyle;

}

@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * location;                                                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                  //@synthesize color=_color - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                                      //@synthesize allDay=_allDay - In the implementation block
@property (assign,getter=isBirthday,nonatomic) BOOL birthday;                                  //@synthesize birthday=_birthday - In the implementation block
@property (assign,getter=isFacebook,nonatomic) BOOL facebook;                                  //@synthesize facebook=_facebook - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isTentative,nonatomic) BOOL tentative;                                //@synthesize tentative=_tentative - In the implementation block
@property (assign,getter=isDeclined,nonatomic) BOOL declined;                                  //@synthesize declined=_declined - In the implementation block
@property (assign,nonatomic) BOOL needsReply;                                                  //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isAllDayDrawingStyle,nonatomic) BOOL allDayDrawingStyle;              //@synthesize allDayDrawingStyle=_allDayDrawingStyle - In the implementation block
@property (assign,nonatomic) BOOL usesSmallText;                                               //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (nonatomic,retain) UIColor * textBackgroundColor; 
@property (assign,nonatomic) BOOL hideText;                                                    //@synthesize hideText=_hideText - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle;                                    //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
+(Class)layerClass;
-(void)setBirthday:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isTentative;
-(BOOL)isFacebook;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(void)setTitleTextColor:(id)arg1 ;
-(void)setTextBackgroundColor:(id)arg1 ;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(BOOL)usesSmallText;
-(void)setAllDayDrawingStyle:(BOOL)arg1 ;
-(BOOL)hasIcon;
-(BOOL)hideText;
-(void)setHideText:(BOOL)arg1 ;
-(void)setTentative:(BOOL)arg1 ;
-(BOOL)isDeclined;
-(void)setDeclined:(BOOL)arg1 ;
-(BOOL)needsReply;
-(void)setNeedsReply:(BOOL)arg1 ;
-(BOOL)isBirthday;
-(void)setFacebook:(BOOL)arg1 ;
-(float)textNaturalWidth;
-(float)minimumNaturalHeightAllText;
-(float)minimumNaturalHeightForPrimaryText;
-(id)titleTextColor;
-(id)textBackgroundColor;
-(BOOL)isAllDayDrawingStyle;
-(void)_invalidateMetrics;
-(id)stringDrawingContext;
-(id)_primaryTextFont;
-(id)_statusText;
-(id)_secondaryText;
-(id)strikethroughColor;
-(id)_secondaryTextFont;
-(id)statusTextColor;
-(id)attributedContentString;
-(id)_statusTextFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setSelected:(BOOL)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(id)location;
-(BOOL)selected;
-(id)initWithContentView:(id)arg1 ;
-(id)secondaryTextColor;
-(void)setSecondaryTextColor:(id)arg1 ;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1 ;
@end
