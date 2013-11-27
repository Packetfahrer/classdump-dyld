/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class UIScrollView, UILabel, NSString;

@interface BuddyCloudConfigAboutConfigurationContainerController : UIViewController {

	BOOL _isSupervised;
	UIScrollView* _containerView;
	UILabel* _descriptionLabel;
	NSString* _organizationName;
	NSString* _organizationDepartment;
	NSString* _organizationEmail;
	NSString* _organizationPhone;
	NSString* _organizationAddress;

}

@property (nonatomic,retain) UIScrollView * containerView;                   //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSString * organizationName;                    //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,retain) NSString * organizationDepartment;              //@synthesize organizationDepartment=_organizationDepartment - In the implementation block
@property (nonatomic,retain) NSString * organizationEmail;                   //@synthesize organizationEmail=_organizationEmail - In the implementation block
@property (nonatomic,retain) NSString * organizationPhone;                   //@synthesize organizationPhone=_organizationPhone - In the implementation block
@property (nonatomic,retain) NSString * organizationAddress;                 //@synthesize organizationAddress=_organizationAddress - In the implementation block
@property (assign,nonatomic) BOOL isSupervised;                              //@synthesize isSupervised=_isSupervised - In the implementation block
-(void)controllerDone:(id)arg1 ;
-(id)organizationDepartment;
-(id)organizationAddress;
-(id)organizationEmail;
-(id)organizationPhone;
-(void)setOrganizationDepartment:(id)arg1 ;
-(void)setOrganizationEmail:(id)arg1 ;
-(void)setOrganizationPhone:(id)arg1 ;
-(void)setOrganizationAddress:(id)arg1 ;
-(void)setIsSupervised:(BOOL)arg1 ;
-(id)organizationName;
-(void)setOrganizationName:(id)arg1 ;
-(void)dealloc;
-(id)containerView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setContainerView:(id)arg1 ;
-(id)descriptionLabel;
-(void)setDescriptionLabel:(id)arg1 ;
-(BOOL)isSupervised;
@end
