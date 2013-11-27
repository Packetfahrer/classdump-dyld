/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SBIconGridImage, SBFolderIcon;

@interface _SBFolderPageElement : NSObject {

	SBIconGridImage* _gridImage;
	unsigned _visibleRow;
	unsigned _pageIndex;
	SBFolderIcon* _folderIcon;

}

@property (nonatomic,retain) SBIconGridImage * gridImage;              //@synthesize gridImage=_gridImage - In the implementation block
@property (assign,nonatomic) unsigned visibleRow;                      //@synthesize visibleRow=_visibleRow - In the implementation block
@property (assign,nonatomic) unsigned pageIndex;                       //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) SBFolderIcon * folderIcon;                //@synthesize folderIcon=_folderIcon - In the implementation block
-(void)setFolderIcon:(id)arg1 ;
-(id)folderIcon;
-(unsigned)visibleRow;
-(id)gridImage;
-(unsigned)firstVisibleMiniIconIndex;
-(unsigned)firstVisibleRowForGap;
-(void)setGridImage:(id)arg1 ;
-(void)setVisibleRow:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)pageIndex;
-(void)setPageIndex:(unsigned)arg1 ;
@end
