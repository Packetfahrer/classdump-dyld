/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDSwatchRenderingResult : NSObject {

	CGImageRef foreground;
	CGImageRef background;

}

@property (nonatomic,readonly) CGImageRef foreground; 
@property (nonatomic,readonly) CGImageRef background; 
+(id)renderingResultWithForeground:(CGImageRef)arg1 background:(CGImageRef)arg2 ;
-(void)dealloc;
-(CGImageRef)background;
-(CGImageRef)foreground;
@end
