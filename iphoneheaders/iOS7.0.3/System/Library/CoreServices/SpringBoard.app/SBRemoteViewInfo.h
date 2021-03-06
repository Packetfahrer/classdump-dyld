/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString, SBProxyRemoteView, SBApplication;

@interface SBRemoteViewInfo : NSObject {

	NSString* _remoteViewIdentifier;
	SBProxyRemoteView* _proxyRemoteView;
	unsigned _contextID;
	SBApplication* _application;
	CGSize _viewSize;

}

@property (nonatomic,retain) NSString * remoteViewIdentifier;                  //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
@property (nonatomic,retain) SBProxyRemoteView * proxyRemoteView;              //@synthesize proxyRemoteView=_proxyRemoteView - In the implementation block
@property (assign,nonatomic) unsigned contextID;                               //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) SBApplication * application;                      //@synthesize application=_application - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                  //@synthesize viewSize=_viewSize - In the implementation block
-(void)setApplication:(id)arg1 ;
-(void)setRemoteViewIdentifier:(id)arg1 ;
-(id)proxyRemoteView;
-(void)setProxyRemoteView:(id)arg1 ;
-(void)dealloc;
-(unsigned)contextID;
-(id)remoteViewIdentifier;
-(CGSize)viewSize;
-(void)setContextID:(unsigned)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(id)application;
@end

