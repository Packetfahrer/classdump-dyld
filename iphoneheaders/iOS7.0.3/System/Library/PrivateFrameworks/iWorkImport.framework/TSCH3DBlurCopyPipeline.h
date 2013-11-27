/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFramebufferCopyPipeline.h>

@interface TSCH3DBlurCopyPipeline : TSCH3DFramebufferCopyPipeline {

	tvec2<float> mOffset;

}

@property (assign,nonatomic) tvec2<float> offset; 
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 offset:(tvec2<float>)arg3 ;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 offset:(tvec2<float>)arg3 ;
-(void)updateShaderEffectsStates;
-(void)dealloc;
-(void)setOffset:(tvec2<float>)arg1 ;
-(tvec2<float>)offset;
-(id).cxx_construct;
@end
