/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDBezierSegment : NSObject {

	CGPoint mA;
	CGPoint mOut;
	CGPoint mIn;
	CGPoint mB;

}

@property (nonatomic,readonly) CGPoint fromPoint; 
@property (nonatomic,readonly) CGPoint outPoint; 
@property (nonatomic,readonly) CGPoint inPoint; 
@property (nonatomic,readonly) CGPoint toPoint; 
@property (nonatomic,readonly) BOOL bogusSegment; 
+(id)segmentFromPoint:(CGPoint)arg1 outPoint:(CGPoint)arg2 inPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 ;
-(float)parametricValueForPoint:(CGPoint)arg1 ;
-(void)splitAtParametricValue:(float)arg1 left:(id*)arg2 right:(id*)arg3 ;
-(CGPoint)outPoint;
-(CGPoint)inPoint;
-(id)initFromPoint:(CGPoint)arg1 outPoint:(CGPoint)arg2 inPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 ;
-(CGPoint)pointAtParametricValue:(float)arg1 ;
-(BOOL)bogusSegment;
-(CGPoint)fromPoint;
-(CGPoint)closestPointToPoint:(CGPoint)arg1 ;
-(id)description;
-(CGPoint)toPoint;
@end

