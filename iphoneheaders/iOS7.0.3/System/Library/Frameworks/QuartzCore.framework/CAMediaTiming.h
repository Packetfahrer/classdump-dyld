/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CAMediaTiming
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
@required
-(void)setSpeed:(float)arg1;
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setFillMode:(id)arg1;
-(void)setBeginTime:(double)arg1;
-(void)setRepeatCount:(float)arg1;
-(void)setAutoreverses:(BOOL)arg1;
-(double)beginTime;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1;
-(float)repeatCount;
-(BOOL)autoreverses;
-(id)fillMode;
@end
