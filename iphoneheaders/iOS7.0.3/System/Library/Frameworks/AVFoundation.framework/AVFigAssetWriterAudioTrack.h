/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigAssetWriterTrack.h>

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {

	NSMutableArray* _pendingAudioSampleBuffers;

}
-(void)prepareToEndSession;
-(BOOL)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)markEndOfDataReturningError:(id*)arg1 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id*)arg6 ;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 error:(id*)arg3 ;
-(BOOL)_flushPendingSampleBuffersReturningError:(id*)arg1 ;
-(void)dealloc;
@end
