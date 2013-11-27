/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {

	AVAsynchronousVideoCompositionRequestInternal* _internal;

}

@property (nonatomic,readonly) AVVideoCompositionRenderContext * renderContext; 
@property (nonatomic,readonly) SCD_Struct_CM4 compositionTime; 
@property (nonatomic,readonly) NSArray * sourceTrackIDs; 
@property (nonatomic,readonly) <AVVideoCompositionInstruction> * videoCompositionInstruction; 
-(id)videoCompositionInstruction;
-(void)_willDeallocOrFinalize;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg3 atTime:(SCD_Struct_CM4)arg4 usingSources:(id)arg5 instruction:(id)arg6 ;
-(id)renderContext;
-(SCD_Struct_CM4)compositionTime;
-(id)sourceTrackIDs;
-(CVBufferRef)sourceFrameByTrackID:(int)arg1 ;
-(void)finishWithComposedVideoFrame:(CVBufferRef)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)finishCancelledRequest;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)finalize;
@end
