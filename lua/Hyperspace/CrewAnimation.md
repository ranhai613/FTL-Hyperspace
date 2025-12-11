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
{: aria-label='Methods' }
#### boolean :CustomDeath ()
{: aria-label='Methods' }

______
### FireShot ()
{: aria-label='Methods' }
#### boolean :FireShot ()
{: aria-label='Methods' }

______
### GetDeathSound ()
{: aria-label='Methods' }
#### string :GetDeathSound ()
{: aria-label='Methods' }

______
### GetFiringFrame ()
{: aria-label='Methods' }
#### integer :GetFiringFrame ()
{: aria-label='Methods' }

______
### GetShootingSound ()
{: aria-label='Methods' }
#### string :GetShootingSound ()
{: aria-label='Methods' }

______
### OnInit ()
{: aria-label='Methods' }
#### void :OnInit (string name, [Pointf](../Hyperspace/Pointf) position, boolean enemy)
{: aria-label='Methods' }

______
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender (number scale, integer selectedState, boolean outlineOnly)
{: aria-label='Methods' }

______
### OnRenderProps ()
{: aria-label='Methods' }
#### void :OnRenderProps ()
{: aria-label='Methods' }

______
### OnUpdate ()
{: aria-label='Methods' }
#### void :OnUpdate ([Pointf](../Hyperspace/Pointf) position, boolean moving, boolean fighting, boolean repairing, boolean dying, boolean onFire)
{: aria-label='Methods' }

______
### OnUpdateEffects ()
{: aria-label='Methods' }
#### void :OnUpdateEffects ()
{: aria-label='Methods' }

______
### RenderIcon ()
{: aria-label='Methods' }
#### void :RenderIcon (boolean border)
{: aria-label='Methods' }

______
### Restart ()
{: aria-label='Methods' }
#### void :Restart ()
{: aria-label='Methods' }

______
### SetupStrips ()
{: aria-label='Methods' }
#### void :SetupStrips ()
{: aria-label='Methods' }

______
### UpdateFiring ()
{: aria-label='Methods' }
#### void :UpdateFiring ()
{: aria-label='Methods' }

______
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

______
### bDoorTarget
{: aria-label='Fields' }
#### boolean .bDoorTarget
{: aria-label='Fields' }

______
### bDrone
{: aria-label='Fields' }
#### boolean .bDrone
{: aria-label='Fields' }

______
### bExactShooting
{: aria-label='Fields' }
#### boolean .bExactShooting
{: aria-label='Fields' }

______
### bFrozen
{: aria-label='Fields' }
#### boolean .bFrozen
{: aria-label='Fields' }

______
### bGhost
{: aria-label='Fields' }
#### boolean .bGhost
{: aria-label='Fields' }

______
### bMale
{: aria-label='Fields' }
#### boolean .bMale
{: aria-label='Fields' }

______
### bPlayer
{: aria-label='Fields' }
#### boolean .bPlayer
{: aria-label='Fields' }

______
### bSharedSpot
{: aria-label='Fields' }
#### boolean .bSharedSpot
{: aria-label='Fields' }

______
### bStunned
{: aria-label='Fields' }
#### boolean .bStunned
{: aria-label='Fields' }

______
### bTyping
{: aria-label='Fields' }
#### boolean .bTyping
{: aria-label='Fields' }

______
### baseStrip
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .baseStrip
{: aria-label='Fields' }

______
### colorStrip
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .colorStrip
{: aria-label='Fields' }

______
### colorblind
{: aria-label='Fields' }
#### boolean .colorblind
{: aria-label='Fields' }

______
### currentShip
{: aria-label='Fields' }
#### integer .currentShip
{: aria-label='Fields' }

______
### direction
{: aria-label='Fields' }
#### integer .direction
{: aria-label='Fields' }

______
### fDamageDone
{: aria-label='Fields' }
#### number .fDamageDone
{: aria-label='Fields' }

______
### forcedAnimation
{: aria-label='Fields' }
#### integer .forcedAnimation
{: aria-label='Fields' }

______
### forcedDirection
{: aria-label='Fields' }
#### integer .forcedDirection
{: aria-label='Fields' }

______
### iShipId
{: aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }

______
### lastPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastPosition
{: aria-label='Fields' }

______
### layerColors
{: aria-label='Fields' }
#### vector\<[GL_Color](../Graphics/GL_Color)\> .layerColors
{: aria-label='Fields' }

______
### layerStrips
{: aria-label='Fields' }
#### vector\<[GL_Texture](../Graphics/GL_Texture)\> .layerStrips
{: aria-label='Fields' }

______
### moveDirection
{: aria-label='Fields' }
#### integer .moveDirection
{: aria-label='Fields' }

______
### projectile
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .projectile
{: aria-label='Fields' }

______
### projectileColor
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .projectileColor
{: aria-label='Fields' }

______
### punchTimer
{: aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .punchTimer
{: aria-label='Fields' }

______
### race
{: aria-label='Fields' }
#### string .race
{: aria-label='Fields' }

______
### shootTimer
{: aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .shootTimer
{: aria-label='Fields' }

______
### smokeEmitter
{: aria-label='Fields' }
#### ParticleEmitter .smokeEmitter
{: aria-label='Fields' }

______
### status
{: aria-label='Fields' }
#### integer .status
{: aria-label='Fields' }

______
### sub_direction
{: aria-label='Fields' }
#### integer .sub_direction
{: aria-label='Fields' }

______
### target
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

______
### uniqueBool1
{: aria-label='Fields' }
#### boolean .uniqueBool1
{: aria-label='Fields' }

______
### uniqueBool2
{: aria-label='Fields' }
#### boolean .uniqueBool2
{: aria-label='Fields' }

___
