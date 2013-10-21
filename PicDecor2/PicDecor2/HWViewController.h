//
//  HWViewController.h
//  PicDecor2
//
//  Created by ERICx86 on 13-10-21.
//  Copyright (c) 2013年 ERICx86. All rights reserved.
//

#import "VCImageEditing.h"

@interface HWViewController : UIViewController {
    IBOutlet VCImageEditing *vcImageController;
}

-(IBAction)doCameraBtn:(id)sender;

-(IBAction)doPhotoAlbumBtn:(id)send;

@end