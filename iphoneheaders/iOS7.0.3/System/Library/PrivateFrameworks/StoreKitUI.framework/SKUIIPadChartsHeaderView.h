/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIControl.h>

@class NSArray;

@interface SKUIIPadChartsHeaderView : UIControl {

	NSArray* _buttons;
	int _selectedTitleIndex;

}

@property (assign,nonatomic) int selectedTitleIndex;              //@synthesize selectedTitleIndex=_selectedTitleIndex - In the implementation block
@property (nonatomic,copy) NSArray * titles; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setTitles:(id)arg1 ;
-(id)titles;
-(void)_reloadSelectedButton;
-(void)setSelectedTitleIndex:(int)arg1 ;
-(int)selectedTitleIndex;
-(void).cxx_destruct;
-(void)_buttonAction:(id)arg1 ;
@end
