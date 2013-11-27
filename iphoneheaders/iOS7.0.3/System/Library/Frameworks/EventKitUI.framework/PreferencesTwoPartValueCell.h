/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@protocol EKCellShortener;
@class TwoPartTextLabel, , UIColor;

@interface PreferencesTwoPartValueCell : UITableViewCell {

	TwoPartTextLabel* _twoPartLabel;
	unsigned _notifiedShort;
	<EKCellShortener>* _shortener;

}

@property (nonatomic,readonly) TwoPartTextLabel * twoPartTextLabel; 
@property (assign,nonatomic,__weak) <EKCellShortener> * shortener;               //@synthesize shortener=_shortener - In the implementation block
@property (nonatomic,readonly) UIColor * valueColor; 
-(void)setShortener:(id)arg1 ;
-(id)twoPartTextLabel;
-(id)valueColor;
-(id)shortener;
-(void)layoutText:(id)arg1 andValue:(id)arg2 ;
-(void)_layoutSubviewsCore;
-(void)checkValueWidths;
-(void)shorten;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end
