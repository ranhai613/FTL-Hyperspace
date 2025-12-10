---
layout: lua
title: CrewAnimation
lang: en
---

# Class "CrewAnimation"


## Constructors
### CrewAnimation ()
{: aria-label='Constructors' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) CrewAnimation ()
{: aria-label='Constructors' }

______
### CrewAnimation ()
{: aria-label='Constructors' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) CrewAnimation (integer _shipId, string _race, [Pointf](../Hyperspace/Pointf) _unk, integer _hostile)
{: aria-label='Constructors' }

___




## Methods
### CustomDeath ()
{: aria-label='Functions' }
#### boolean :CustomDeath ()
{: aria-label='Functions' }

______
### FireShot ()
{: aria-label='Functions' }
#### boolean :FireShot ()
{: aria-label='Functions' }

______
### GetDeathSound ()
{: aria-label='Functions' }
#### string :GetDeathSound ()
{: aria-label='Functions' }

______
### GetFiringFrame ()
{: aria-label='Functions' }
#### integer :GetFiringFrame ()
{: aria-label='Functions' }

______
### GetShootingSound ()
{: aria-label='Functions' }
#### string :GetShootingSound ()
{: aria-label='Functions' }

______
### OnInit ()
{: aria-label='Functions' }
#### void :OnInit (string name, [Pointf](../Hyperspace/Pointf) position, boolean enemy)
{: aria-label='Functions' }

______
### OnRender ()
{: aria-label='Functions' }
#### void :OnRender (number scale, integer selectedState, boolean outlineOnly)
{: aria-label='Functions' }

______
### OnRenderProps ()
{: aria-label='Functions' }
#### void :OnRenderProps ()
{: aria-label='Functions' }

______
### OnUpdate ()
{: aria-label='Functions' }
#### void :OnUpdate ([Pointf](../Hyperspace/Pointf) position, boolean moving, boolean fighting, boolean repairing, boolean dying, boolean onFire)
{: aria-label='Functions' }

______
### OnUpdateEffects ()
{: aria-label='Functions' }
#### void :OnUpdateEffects ()
{: aria-label='Functions' }

______
### RenderIcon ()
{: aria-label='Functions' }
#### void :RenderIcon (boolean border)
{: aria-label='Functions' }

______
### Restart ()
{: aria-label='Functions' }
#### void :Restart ()
{: aria-label='Functions' }

______
### SetupStrips ()
{: aria-label='Functions' }
#### void :SetupStrips ()
{: aria-label='Functions' }

______
### UpdateFiring ()
{: aria-label='Functions' }
#### void :UpdateFiring ()
{: aria-label='Functions' }

______
### UpdateShooting ()
{: aria-label='Functions' }
#### void :UpdateShooting ()
{: aria-label='Functions' }

___


## Fields
### anims
{: aria-label='Variables' }
#### vector\<vector\<[Animation](../Hyperspace/Animation)\>\> .anims
{: aria-label='Variables' }

______
### bDoorTarget
{: aria-label='Variables' }
#### boolean .bDoorTarget
{: aria-label='Variables' }

______
### bDrone
{: aria-label='Variables' }
#### boolean .bDrone
{: aria-label='Variables' }

______
### bExactShooting
{: aria-label='Variables' }
#### boolean .bExactShooting
{: aria-label='Variables' }

______
### bFrozen
{: aria-label='Variables' }
#### boolean .bFrozen
{: aria-label='Variables' }

______
### bGhost
{: aria-label='Variables' }
#### boolean .bGhost
{: aria-label='Variables' }

______
### bMale
{: aria-label='Variables' }
#### boolean .bMale
{: aria-label='Variables' }

______
### bPlayer
{: aria-label='Variables' }
#### boolean .bPlayer
{: aria-label='Variables' }

______
### bSharedSpot
{: aria-label='Variables' }
#### boolean .bSharedSpot
{: aria-label='Variables' }

______
### bStunned
{: aria-label='Variables' }
#### boolean .bStunned
{: aria-label='Variables' }

______
### bTyping
{: aria-label='Variables' }
#### boolean .bTyping
{: aria-label='Variables' }

______
### baseStrip
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .baseStrip
{: aria-label='Variables' }

______
### colorStrip
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .colorStrip
{: aria-label='Variables' }

______
### colorblind
{: aria-label='Variables' }
#### boolean .colorblind
{: aria-label='Variables' }

______
### currentShip
{: aria-label='Variables' }
#### integer .currentShip
{: aria-label='Variables' }

______
### direction
{: aria-label='Variables' }
#### integer .direction
{: aria-label='Variables' }

______
### fDamageDone
{: aria-label='Variables' }
#### number .fDamageDone
{: aria-label='Variables' }

______
### forcedAnimation
{: aria-label='Variables' }
#### integer .forcedAnimation
{: aria-label='Variables' }

______
### forcedDirection
{: aria-label='Variables' }
#### integer .forcedDirection
{: aria-label='Variables' }

______
### iShipId
{: aria-label='Variables' }
#### integer .iShipId
{: aria-label='Variables' }

______
### lastPosition
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .lastPosition
{: aria-label='Variables' }

______
### layerColors
{: aria-label='Variables' }
#### vector\<[GL_Color](../Graphics/GL_Color)\> .layerColors
{: aria-label='Variables' }

______
### layerStrips
{: aria-label='Variables' }
#### vector\<[GL_Texture](../Graphics/GL_Texture)\> .layerStrips
{: aria-label='Variables' }

______
### moveDirection
{: aria-label='Variables' }
#### integer .moveDirection
{: aria-label='Variables' }

______
### projectile
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .projectile
{: aria-label='Variables' }

______
### projectileColor
{: aria-label='Variables' }
#### [GL_Color](../Graphics/GL_Color) .projectileColor
{: aria-label='Variables' }

______
### punchTimer
{: aria-label='Variables' }
#### [TimerHelper](../Hyperspace/TimerHelper) .punchTimer
{: aria-label='Variables' }

______
### race
{: aria-label='Variables' }
#### string .race
{: aria-label='Variables' }

______
### shootTimer
{: aria-label='Variables' }
#### [TimerHelper](../Hyperspace/TimerHelper) .shootTimer
{: aria-label='Variables' }

______
### smokeEmitter
{: aria-label='Variables' }
#### ParticleEmitter .smokeEmitter
{: aria-label='Variables' }

______
### status
{: aria-label='Variables' }
#### integer .status
{: aria-label='Variables' }

______
### sub_direction
{: aria-label='Variables' }
#### integer .sub_direction
{: aria-label='Variables' }

______
### target
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Variables' }

______
### uniqueBool1
{: aria-label='Variables' }
#### boolean .uniqueBool1
{: aria-label='Variables' }

______
### uniqueBool2
{: aria-label='Variables' }
#### boolean .uniqueBool2
{: aria-label='Variables' }

___
