//
//  VCImageEditing.h
//  PicDecor2
//
//  Created by ERICx86 on 13-10-21.
//  Copyright (c) 2013年 ERICx86. All rights reserved.
//

#import "VCDecorations.h"

@interface VCImageEditing : UIViewController {
    IBOutlet UIImageView *ivEditingImage;
}

-(IBAction)doDecorateBtn:(id)sender;

-(IBAction)doEmailBtn:(id)sender;

@end