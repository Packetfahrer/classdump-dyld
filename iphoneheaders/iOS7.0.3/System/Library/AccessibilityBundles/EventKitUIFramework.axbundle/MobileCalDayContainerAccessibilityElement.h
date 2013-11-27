/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUIFramework/EventKitUIFramework-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSMutableArray, NSDate, UIView;

@interface MobileCalDayContainerAccessibilityElement : UIAccessibilityElement {

	NSMutableArray* _children;
	NSDate* _date;
	int _indexInArray;
	UIView* _dayGrid;

}

@property (nonatomic,retain) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) int indexInArray;                       //@synthesize indexInArray=_indexInArray - In the implementation block
@property (assign,nonatomic) UIView * dayGrid;                       //@synthesize dayGrid=_dayGrid - In the implementation block
-(void)setIndexInArray:(int)arg1 ;
-(id)dayGrid;
-(void)setDayGrid:(id)arg1 ;
-(int)indexInArray;
-(void)dealloc;
-(id)date;
-(id)accessibilityLabel;
-(void)setDate:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setChildren:(id)arg1 ;
-(id)accessibilityContainerElements;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityParentForFindingScrollParent;
-(id)children;
@end
