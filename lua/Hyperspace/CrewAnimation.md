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

___
### CrewAnimation ()
{: aria-label='Constructors' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) CrewAnimation (integer _shipId, string _race, [Pointf](../Hyperspace/Pointf) _unk, integer _hostile)
{: aria-label='Constructors' }

___




## Methods
### CustomDeath ()
{: aria-label='Methods' }
#### boolean :CustomDeath ()
{: aria-label='Methods' }

___
### FireShot ()
{: aria-label='Methods' }
#### boolean :FireShot ()
{: aria-label='Methods' }

___
### GetDeathSound ()
{: aria-label='Methods' }
#### string :GetDeathSound ()
{: aria-label='Methods' }

___
### GetFiringFrame ()
{: aria-label='Methods' }
#### integer :GetFiringFrame ()
{: aria-label='Methods' }

___
### GetShootingSound ()
{: aria-label='Methods' }
#### string :GetShootingSound ()
{: aria-label='Methods' }

___
### OnInit ()
{: aria-label='Methods' }
#### void :OnInit (string name, [Pointf](../Hyperspace/Pointf) position, boolean enemy)
{: aria-label='Methods' }

___
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender (number scale, integer selectedState, boolean outlineOnly)
{: aria-label='Methods' }

___
### OnRenderProps ()
{: aria-label='Methods' }
#### void :OnRenderProps ()
{: aria-label='Methods' }

___
### OnUpdate ()
{: aria-label='Methods' }
#### void :OnUpdate ([Pointf](../Hyperspace/Pointf) position, boolean moving, boolean fighting, boolean repairing, boolean dying, boolean onFire)
{: aria-label='Methods' }

___
### OnUpdateEffects ()
{: aria-label='Methods' }
#### void :OnUpdateEffects ()
{: aria-label='Methods' }

___
### RenderIcon ()
{: aria-label='Methods' }
#### void :RenderIcon (boolean border)
{: aria-label='Methods' }

___
### Restart ()
{: aria-label='Methods' }
#### void :Restart ()
{: aria-label='Methods' }

___
### SetupStrips ()
{: aria-label='Methods' }
#### void :SetupStrips ()
{: aria-label='Methods' }

___
### UpdateFiring ()
{: aria-label='Methods' }
#### void :UpdateFiring ()
{: aria-label='Methods' }

___
### UpdateShooting ()
{: aria-label='Methods' }
#### void :UpdateShooting ()
{: aria-label='Methods' }

___


## Fields
### anims
{: aria-label='Fields' }
#### vector\<vector\<[Animation](../Hyperspace/Animation)\>\> .anims
{: aria-label='Fields' }

___
### bDoorTarget
{: aria-label='Fields' }
#### boolean .bDoorTarget
{: aria-label='Fields' }

___
### bDrone
{: aria-label='Fields' }
#### boolean .bDrone
{: aria-label='Fields' }

___
### bExactShooting
{: aria-label='Fields' }
#### boolean .bExactShooting
{: aria-label='Fields' }

___
### bFrozen
{: aria-label='Fields' }
#### boolean .bFrozen
{: aria-label='Fields' }

___
### bGhost
{: aria-label='Fields' }
#### boolean .bGhost
{: aria-label='Fields' }

___
### bMale
{: aria-label='Fields' }
#### boolean .bMale
{: aria-label='Fields' }

___
### bPlayer
{: aria-label='Fields' }
#### boolean .bPlayer
{: aria-label='Fields' }

___
### bSharedSpot
{: aria-label='Fields' }
#### boolean .bSharedSpot
{: aria-label='Fields' }

___
### bStunned
{: aria-label='Fields' }
#### boolean .bStunned
{: aria-label='Fields' }

___
### bTyping
{: aria-label='Fields' }
#### boolean .bTyping
{: aria-label='Fields' }

___
### baseStrip
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .baseStrip
{: aria-label='Fields' }

___
### colorStrip
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .colorStrip
{: aria-label='Fields' }

___
### colorblind
{: aria-label='Fields' }
#### boolean .colorblind
{: aria-label='Fields' }

___
### currentShip
{: aria-label='Fields' }
#### integer .currentShip
{: aria-label='Fields' }

___
### direction
{: aria-label='Fields' }
#### integer .direction
{: aria-label='Fields' }

___
### fDamageDone
{: aria-label='Fields' }
#### number .fDamageDone
{: aria-label='Fields' }

___
### forcedAnimation
{: aria-label='Fields' }
#### integer .forcedAnimation
{: aria-label='Fields' }

___
### forcedDirection
{: aria-label='Fields' }
#### integer .forcedDirection
{: aria-label='Fields' }

___
### iShipId
{: aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }

___
### lastPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastPosition
{: aria-label='Fields' }

___
### layerColors
{: aria-label='Fields' }
#### vector\<[GL_Color](../Graphics/GL_Color)\> .layerColors
{: aria-label='Fields' }

___
### layerStrips
{: aria-label='Fields' }
#### vector\<[GL_Texture](../Graphics/GL_Texture)\> .layerStrips
{: aria-label='Fields' }

___
### moveDirection
{: aria-label='Fields' }
#### integer .moveDirection
{: aria-label='Fields' }

___
### projectile
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .projectile
{: aria-label='Fields' }

___
### projectileColor
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .projectileColor
{: aria-label='Fields' }

___
### punchTimer
{: aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .punchTimer
{: aria-label='Fields' }

___
### race
{: aria-label='Fields' }
#### string .race
{: aria-label='Fields' }

___
### shootTimer
{: aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .shootTimer
{: aria-label='Fields' }

___
### smokeEmitter
{: aria-label='Fields' }
#### ParticleEmitter .smokeEmitter
{: aria-label='Fields' }

___
### status
{: aria-label='Fields' }
#### integer .status
{: aria-label='Fields' }

___
### sub_direction
{: aria-label='Fields' }
#### integer .sub_direction
{: aria-label='Fields' }

___
### target
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

___
### uniqueBool1
{: aria-label='Fields' }
#### boolean .uniqueBool1
{: aria-label='Fields' }

___
### uniqueBool2
{: aria-label='Fields' }
#### boolean .uniqueBool2
{: aria-label='Fields' }

___
