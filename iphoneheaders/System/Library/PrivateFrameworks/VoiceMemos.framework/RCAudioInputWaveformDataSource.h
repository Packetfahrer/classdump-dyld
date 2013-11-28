/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <VoiceMemos/RCWaveformGeneratorSegmentOutputObserver.h>
#import <VoiceMemos/RCWaveformDataSource.h>

@protocol OS_dispatch_source;
@class RCWaveform, RCMutableWaveform, RCWaveformGenerator, NSURL, RCAudioInputDevice, NSObject;

@interface RCAudioInputWaveformDataSource : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, RCWaveformGeneratorSegmentOutputObserver, RCWaveformDataSource> {

	RCMutableWaveform* _waveform;
	RCWaveformGenerator* _waveformGenerator;
	NSURL* _waveformURL;
	RCAudioInputDevice* _inputDevice;
	NSObject<OS_dispatch_source>* _sampleTimer;
	BOOL _wasSaved;

}

@property (nonatomic,readonly) RCWaveform * waveform; 
-(void)dealloc;
-(id)init;
-(void)reload;
-(double)duration;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(void)finishLoadingBeforeDate:(id)arg1 loadingFinishedBlock:(/*^block*/ id)arg2 ;
-(id)initWithAudioInputDevice:(id)arg1 ;
-(void)beginLoadingForRecordingOutputURL:(id)arg1 ;
-(id)waveformGenerator;
-(id)waveform;
-(void)handleInputBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_saveWaveformIfNecessary;
-(id)dataSourceByReloading;
-(void).cxx_destruct;
@end
