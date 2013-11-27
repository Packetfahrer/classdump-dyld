/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIResourceRequest.h>
#import <CoreFoundation/NSCopying.h>

@protocol SKUIArtworkRequestDelegate;
@class SSVURLDataConsumer, , NSURL;

@interface SKUIArtworkRequest : SKUIResourceRequest <NSCopying> {

	SSVURLDataConsumer* _dataConsumer;
	<SKUIArtworkRequestDelegate>* _delegate;
	NSURL* _url;

}

@property (nonatomic,retain) SSVURLDataConsumer * dataConsumer;                           //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (assign,nonatomic,__weak) <SKUIArtworkRequestDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                   //@synthesize url=_url - In the implementation block
-(void)setDataConsumer:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)dataConsumer;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(void).cxx_destruct;
@end
