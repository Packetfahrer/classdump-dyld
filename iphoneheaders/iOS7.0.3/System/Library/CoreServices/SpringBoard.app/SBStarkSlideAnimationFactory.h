/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIBasicAnimationFactory.h>

@interface SBStarkSlideAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	double _startTime;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
@end
