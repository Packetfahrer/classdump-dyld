/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSDAutoscrollDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject, NSTimer;

@interface TSDAutoscroll : NSObject {

	NSObject<TSDAutoscrollDelegate>* mTarget;
	CGPoint mPoint;
	int mDirections;
	double mRepeatInterval;
	NSTimer* mTimer;
	unsigned mCount;
	BOOL mActive;
	CGPoint mLastAutoscrollDelta;
	double mLastFired;

}

@property (assign,nonatomic) NSObject<TSDAutoscrollDelegate> * target; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL active; 
@property (nonatomic,readonly) CGPoint lastAutoscrollDelta; 
+(void)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 ;
-(BOOL)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 directions:(int)arg3 repeatInterval:(double)arg4 ;
-(unsigned)p_deltaForCount:(unsigned)arg1 ;
-(CGPoint)lastAutoscrollDelta;
-(void)dealloc;
-(unsigned)count;
-(void)invalidate;
-(void)setTarget:(id)arg1 ;
-(void)setRepeatInterval:(double)arg1 ;
-(id)target;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)active;
-(int)directions;
-(CGPoint)point;
-(void)timerFired:(id)arg1 ;
-(double)repeatInterval;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setDirections:(int)arg1 ;
-(void)setActive:(BOOL)arg1 ;
@end
