/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class UIColor, UIImage, UIView, UIFont;

@interface CNFRegAppearanceController : NSObject

@property (nonatomic,readonly) int keyboardAppearance; 
@property (nonatomic,readonly) UIColor * customBackgroundColor; 
@property (nonatomic,readonly) UIColor * userInteractionColor; 
@property (nonatomic,readonly) BOOL styleUsesCustomTableStyle; 
@property (nonatomic,@dynamic,readonly) UIColor * tableBackgroundColor; 
@property (nonatomic,@dynamic,readonly) UIColor * tableSectionBorderColor; 
@property (nonatomic,readonly) UIImage * tableSectionShadowImage; 
@property (nonatomic,readonly) UIColor * tableCellBackgroundColor; 
@property (nonatomic,@dynamic,readonly) UIColor * tableCellTextLabelColor; 
@property (nonatomic,@dynamic,readonly) UIColor * tableCellTextLabelBackgroundColor; 
@property (nonatomic,@dynamic,readonly) UIColor * tableCellDetailLabelColor; 
@property (nonatomic,@dynamic,readonly) UIColor * tableCellDetailLabelBackgroundColor; 
@property (nonatomic,readonly) UIImage * tableCellButtonImage; 
@property (nonatomic,readonly) UIImage * tableCellButtonImageSelected; 
@property (nonatomic,readonly) UIColor * tableCellEditableTextColor; 
@property (nonatomic,readonly) UIColor * tableCellEditableTextPlaceholderColor; 
@property (nonatomic,readonly) UIColor * tableCellEditableInsertionPointColor; 
@property (nonatomic,readonly) UIImage * tableCellEditableTextFieldClearButton; 
@property (nonatomic,readonly) UIImage * tableCellEditableTextFieldClearButtonPressed; 
@property (nonatomic,readonly) BOOL styleUsesCustomAccessoryView; 
@property (nonatomic,readonly) UIView * tableCellCustomAccessoryViewDisclosureIndicator; 
@property (nonatomic,readonly) UIImage * tableCellCheckmarkImage; 
@property (nonatomic,readonly) UIImage * tableCellCheckmarkImageSelected; 
@property (nonatomic,readonly) UIImage * tableCellCheckmarkImageDisabled; 
@property (nonatomic,readonly) BOOL styleUsesCustomSeparatorStyle; 
@property (nonatomic,readonly) int tableSeparatorStyle; 
@property (nonatomic,readonly) UIColor * tableSeparatorColor; 
@property (nonatomic,readonly) UIColor * tableSeparatorTopShadowColor; 
@property (nonatomic,readonly) UIColor * tableSeparatorBottomShadowColor; 
@property (nonatomic,readonly) UIColor * tableHeaderTextColor; 
@property (nonatomic,readonly) UIColor * tableHeaderTextColorSelected; 
@property (nonatomic,readonly) UIColor * tableHeaderTextShadowColor; 
@property (nonatomic,readonly) CGSize tableHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIFont * tableHeaderFont; 
@property (nonatomic,readonly) UIFont * tableFooterFont; 
@property (nonatomic,readonly) UIColor * tableFooterTextColor; 
@property (nonatomic,readonly) int tableHeaderTextAlignment; 
@property (nonatomic,readonly) int tableFooterTextAlignment; 
@property (nonatomic,readonly) BOOL styleUsesCustomSearchResultsStyle; 
@property (nonatomic,readonly) int searchResultsTableSeparatorStyle; 
@property (nonatomic,readonly) UIColor * searchResultsTableSeparatorColor; 
@property (nonatomic,readonly) UIColor * searchResultsTableSeparatorTopShadowColor; 
@property (nonatomic,readonly) UIColor * searchResultsTableSeparatorBottomShadowColor; 
@property (nonatomic,@dynamic,readonly) int modalPresentationStyle; 
@property (nonatomic,@dynamic,readonly) UIView * webViewBackgroundView; 
@property (nonatomic,@dynamic,readonly) UIColor * webViewBackgroundColor; 
@property (nonatomic,@dynamic,readonly) BOOL webViewIsOpaque; 
@property (nonatomic,readonly) BOOL webViewDrawsShadows; 
@property (nonatomic,readonly) BOOL splashScreenShowsIcon; 
@property (nonatomic,readonly) UIColor * splashTitleLabelTextColor; 
@property (nonatomic,readonly) UIColor * splashEntryFieldTextColor; 
@property (nonatomic,readonly) UIColor * splashEntryPlaceholderTextColor; 
@property (nonatomic,readonly) UIColor * splashEntryFieldLabelTextColor; 
@property (nonatomic,readonly) UIColor * splashSignInFieldsBorderColor; 
@property (nonatomic,readonly) UIColor * splashSignInFieldsBackgroundColor; 
@property (nonatomic,readonly) int splashSignInProgressIndicatorColor; 
@property (nonatomic,readonly) int navigationBarStyle; 
@property (nonatomic,readonly) BOOL navigationBarIsTranslucent; 
@property (nonatomic,readonly) int navigationBarActivityIndicatorStyle; 
@property (nonatomic,readonly) BOOL firstNavigationBarHidden; 
@property (nonatomic,readonly) BOOL navigationBarHidesTitle; 
@property (nonatomic,readonly) BOOL navigationBarHidesShadow; 
@property (nonatomic,readonly) UIColor * navigationBarTintColor; 
@property (nonatomic,readonly) BOOL navigationBarTranslucent; 
@property (nonatomic,readonly) UIImage * navigationBarBackgroundImage; 
@property (nonatomic,readonly) UIColor * learnMoreTextColor; 
@property (nonatomic,readonly) UIColor * learnMoreTextColorSelected; 
@property (nonatomic,readonly) UIColor * learnMoreShadowColor; 
@property (nonatomic,readonly) UIImage * learnMoreArrowImage; 
@property (nonatomic,readonly) UIImage * learnMoreArrowImagePressed; 
@property (nonatomic,readonly) BOOL learnMoreButtonDrawsUnderline; 
@property (nonatomic,readonly) BOOL actionSheetsUsePopoverStyle; 
+(id)globalAppearanceController;
+(id)appearanceControllerForStyle:(int)arg1 ;
+(id)translucentBlackAppearanceController;
+(id)stripedAppearanceController;
+(id)gradientAppearanceController;
+(id)modernAppearanceController;
+(id)modernTransparentLightAppearanceController;
+(id)modernTransparentDarkAppearanceController;
+(id)defaultAppearanceController;
-(int)modalPresentationStyle;
-(id)tableBackgroundColor;
-(id)tableCellBackgroundColor;
-(int)keyboardAppearance;
-(int)navigationBarStyle;
-(BOOL)navigationBarIsTranslucent;
-(BOOL)styleUsesCustomTableStyle;
-(id)customBackgroundColor;
-(id)userInteractionColor;
-(id)tableCellCheckmarkImageDisabled;
-(id)tableCellEditableTextFieldClearButton;
-(id)tableCellEditableTextFieldClearButtonPressed;
-(id)tableCellTextLabelBackgroundColor;
-(id)tableCellTextLabelColor;
-(id)tableCellDetailLabelColor;
-(id)tableCellDetailLabelBackgroundColor;
-(int)tableSeparatorStyle;
-(id)tableSeparatorColor;
-(id)tableHeaderTextColor;
-(id)tableFooterTextColor;
-(BOOL)splashScreenShowsIcon;
-(id)splashTitleLabelTextColor;
-(id)splashEntryFieldTextColor;
-(id)splashEntryPlaceholderTextColor;
-(id)splashEntryFieldLabelTextColor;
-(id)splashSignInFieldsBorderColor;
-(id)splashSignInFieldsBackgroundColor;
-(int)splashSignInProgressIndicatorColor;
-(int)navigationBarActivityIndicatorStyle;
-(id)navigationBarTintColor;
-(BOOL)navigationBarTranslucent;
-(id)navigationBarBackgroundImage;
-(id)learnMoreTextColor;
-(id)learnMoreArrowImage;
-(BOOL)styleUsesCustomAccessoryView;
-(BOOL)styleUsesCustomSeparatorStyle;
-(BOOL)styleUsesCustomSearchResultsStyle;
-(id)tableSeparatorTopShadowColor;
-(id)tableSeparatorBottomShadowColor;
-(id)tableCellButtonImage;
-(id)tableCellButtonImageSelected;
-(id)tableCellEditableTextColor;
-(id)tableCellEditableTextPlaceholderColor;
-(id)tableSectionBorderColor;
-(id)tableSectionShadowImage;
-(id)tableCellEditableInsertionPointColor;
-(id)tableCellCustomAccessoryViewDisclosureIndicator;
-(id)tableCellCheckmarkImage;
-(id)tableCellCheckmarkImageSelected;
-(id)tableHeaderTextColorSelected;
-(id)tableHeaderTextShadowColor;
-(CGSize)tableHeaderTextShadowOffset;
-(id)tableHeaderFont;
-(id)tableFooterFont;
-(int)tableHeaderTextAlignment;
-(int)tableFooterTextAlignment;
-(int)searchResultsTableSeparatorStyle;
-(id)searchResultsTableSeparatorColor;
-(id)searchResultsTableSeparatorTopShadowColor;
-(id)searchResultsTableSeparatorBottomShadowColor;
-(id)webViewBackgroundView;
-(id)webViewBackgroundColor;
-(BOOL)webViewIsOpaque;
-(BOOL)webViewDrawsShadows;
-(BOOL)firstNavigationBarHidden;
-(BOOL)navigationBarHidesTitle;
-(BOOL)navigationBarHidesShadow;
-(id)learnMoreTextColorSelected;
-(id)learnMoreShadowColor;
-(id)learnMoreArrowImagePressed;
-(BOOL)learnMoreButtonDrawsUnderline;
-(BOOL)actionSheetsUsePopoverStyle;
@end
