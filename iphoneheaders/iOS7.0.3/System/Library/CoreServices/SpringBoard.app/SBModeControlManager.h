/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSArray;

@interface SBModeControlManager : NSObject {

	NSArray* _views;

}

@property (nonatomic,readonly) NSArray * views;                        //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) unsigned numberOfSegments; 
@property (assign,nonatomic) int selectedSegmentIndex; 
+(void)_configureSegmentedControl:(id)arg1 forGraphicsQuaility:(int)arg2 ;
+(void)_configureSegmentedControlForButtonUse:(id)arg1 ;
+(void)_configureSegmentedControlForLabelUse:(id)arg1 ;
+(id)_segmentedControlForUse:(int)arg1 graphicsQuaility:(int)arg2 ;
-(void)setTintColor:(id)arg1 forUse:(int)arg2 ;
-(id)initWithGraphicsQuality:(int)arg1 ;
-(id)_segmentedControlForUse:(int)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeAllSegments;
-(void)setSelectedSegmentIndex:(int)arg1 ;
-(void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned)arg2 animated:(BOOL)arg3 ;
-(unsigned)numberOfSegments;
-(int)selectedSegmentIndex;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(id)views;
@end
