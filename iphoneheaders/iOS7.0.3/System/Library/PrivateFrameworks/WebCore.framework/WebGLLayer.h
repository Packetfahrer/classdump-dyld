/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@interface WebGLLayer : CAEAGLLayer {

	GraphicsLayer* m_layerOwner;
	GraphicsContext3D* m_context;

}
-(void)display;
-(id)initWithGraphicsContext3D:(GraphicsContext3D*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setLayerOwner:(GraphicsLayer*)arg1 ;
-(GraphicsLayer*)layerOwner;
@end
