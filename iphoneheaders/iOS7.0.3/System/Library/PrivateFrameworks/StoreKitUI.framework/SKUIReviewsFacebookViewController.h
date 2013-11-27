/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@protocol SKUIReviewsFacebookViewControllerDelegate;
@class SKUIClientContext, , SKUIFacebookLikeStatus, SKUIReviewsFacebookView;

@interface SKUIReviewsFacebookViewController : UIViewController {

	SKUIClientContext* _clientContext;
	<SKUIReviewsFacebookViewControllerDelegate>* _delegate;
	SKUIFacebookLikeStatus* _facebookLikeStatus;
	SKUIReviewsFacebookView* _facebookView;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIFacebookLikeStatus * facebookLikeStatus;                                  //@synthesize facebookLikeStatus=_facebookLikeStatus - In the implementation block
@property (assign,nonatomic,__weak) <SKUIReviewsFacebookViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(id)clientContext;
-(void)setFacebookLikeStatus:(id)arg1 ;
-(id)facebookLikeStatus;
-(void)_reloadFacebookView;
-(void)_toggleLike:(id)arg1 ;
-(void)_changeStatusToUserLiked:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end
