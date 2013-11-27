/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebCore/WAKView.h>
#import <WebKit/WebDocumentView.h>
#import <WebKit/WebDocumentElement.h>

@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)layout;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)viewWillMoveToHostWindow:(id)arg1 ;
-(void)viewDidMoveToHostWindow;
-(id)elementAtPoint:(CGPoint)arg1 allowShadowContent:(BOOL)arg2 ;
@end
