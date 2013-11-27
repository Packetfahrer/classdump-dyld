/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@class NSString;

@interface _PLClientTransaction : PLClientServerTransaction {

	int _fileDescriptor;
	id _processAssertion;
	NSString* _path;

}

@property (assign,nonatomic) int fileDescriptor;               //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,retain) id processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSString * path;                  //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)path;
-(void)setPath:(id)arg1 ;
-(void)setFileDescriptor:(int)arg1 ;
-(int)fileDescriptor;
-(void)abortTransaction;
-(void)setProcessAssertion:(id)arg1 ;
-(id)processAssertion;
@end
